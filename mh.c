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

int mystrcmp( char *s1, char *s2) {
	int i = 0;
	while (s1[i]==s2[i]) {
		if (!s1[i]) {
			return 0;
		}
		i++;
	}
	return s1[i]-s2[i];
}

char * mystrncpy( char *dest, char *source, int n) {
	char * output = & dest[mystrlen(dest)];
	int i = 0;
	while (i < n && source[i]) {
		dest[i] = source[i];
		i++;
	}
	while (i<n) {
		dest[i] = 0;
	}
	if (!output[0]) {
		output = & dest[n];
	}
}


int main(){
	char *s0 = "hello";
	printf("length of \"hello\": %d\n", mystrlen(s0));
	s0 = "";
	printf("length of empty string: %d\n", mystrlen(s0));

	char s1[] = "hello";
	char s2[] = "hill";
	printf("Should be negative: \t%d\n",strcmp(s1,s2)); 
	char s3[] = "abce";
	char s4[] = "abcd";
	printf("Should be positive: \t%d\n",strcmp(s3,s4));

	char * s5 = "hello";
	char * s6 = "goodbye";
	printf("Testing strncpy:\n");
	printf("s5:%s\n", s5);
	printf("s6:%s\n", s6);
	mystrncpy(s5,s6,3);
	printf("s5 after mystrncpy(s5,s6,3):%s\n", s5);

}

