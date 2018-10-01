all: mystrings.o driver.o
	gcc -o tests mystrings.o driver.o

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c

driver.o: driver.c mystrings.h
	gcc -c driver.c

run:
	./tests

clean:
	rm *.o