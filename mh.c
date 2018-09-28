#include <stdio.h>
#include <string.h>
#include "mystrings.h" 

int mystrlen(char *s) {
	int i = 0;
	while (s[i]) {
		i++;
	}
	return i;
}

int main(){
	char *s1 = "hello";
	printf("%d\n", mystrlen(s1));
	s1 = "";
	printf("%d\n", mystrlen(s1));
	
}