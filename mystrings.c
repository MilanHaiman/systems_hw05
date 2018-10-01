#include <stdio.h>
#include <string.h>
#include "mystrings.h" 

char * mystrchr( char *s, char c){
  while(*s&&c!=*s){
    s++;
  }
  if(*s){
    return s;
  }
  return NULL;

}

char * mystrcat( char *dest, char *source){
  char *end=dest+strlen(dest);
  while(*source){
    *end=*source;
    source++;
    end++;
  }
  *end='\0';
  return dest;
}

char * mystrstr( char *s1, char * s2 ){
  char *first=mystrchr(s1,*s2);
  if(first==NULL){
    return NULL;
  }
  for(int i=0;i<strlen(s2);i++){
    if(first[i]!=s2[i]){
        if(first==NULL){
         return NULL;
        }
        else{
          first=mystrchr(first+1,*s2);
          i=0;
        }
    }
  }
  return first;
}

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
	return output;
}
