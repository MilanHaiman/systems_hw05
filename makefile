all: mystrings.o driver.o
	clang -o tests mystrings.o driver.o

mystrings.o: mystrings.c mystrings.h
	clang -c mystrings.c

driver.o: driver.c mystrings.h
	clang -c driver.c

run:
	./tests

clean:
	rm *.o