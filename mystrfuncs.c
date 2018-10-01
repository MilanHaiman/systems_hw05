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
  char *end=dest+mystrlen(dest);
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
  for(int i=0;i<mystrlen(s2);i++){
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

int main(){
    printf("test for strlen\n\n");
    
    char *s1="Hello World";
    char *s2="";
    char *s3="supercalifragilisticexpialidocious";

    printf("Using our function:\n");
    printf("Length of %s: %d\n",s1,mystrlen(s1));
    printf("Length of %s: %d\n",s2,mystrlen(s2));
    printf("Length of %s: %d\n\n",s3,mystrlen(s3));

    printf("Using built-in function:\n");
    printf("Length of %s: %lu\n",s1,strlen(s1));
    printf("Length of %s: %lu\n",s2,strlen(s2));
    printf("Length of %s: %lu\n",s3,strlen(s3));
    printf("------------\n\n");

    printf("test for strcmp\n\n");

    s1="abce";
    s2="abcd";
    s3="hello";
    char *s4="hill";
    char *s5="hello";

    printf("Using our function:\n");
    printf("Comparison of %s and %s: %d\n",s1,s2,mystrcmp(s1,s2));
    printf("Comparison of %s and %s: %d\n",s3,s4,mystrcmp(s3,s4));
    printf("Comparison of %s and %s: %d\n\n",s3,s5,mystrcmp(s3,s5));

    printf("Using built-in function:\n");
    printf("Comparison of %s and %s: %d\n",s1,s2,strcmp(s1,s2));
    printf("Comparison of %s and %s: %d\n",s3,s4,strcmp(s3,s4));
    printf("Comparison of %s and %s: %d\n",s3,s5,strcmp(s3,s5));
    printf("------------\n\n");

    printf("test for strchr\n\n");
  
    char *str="Order";
    char s='r';
    char *sp=mystrchr(str,s);

    printf("Using our function:\n");
    printf("Address of the first occurence of %c in %s: %p\n",s,str,sp);
    
    s='z';
    sp=mystrchr(str,s);
    
    printf("Address of the first occurence of %c in %s: %p\n\n",s,str,sp);

    printf("Using built-in function:\n");
    
    s='r';
    sp=strchr(str,s);

    printf("Address of the first occurence of %c in %s: %p\n",s,str,sp);
    
    s='z';
    sp=strchr(str,s);
    
    printf("Address of the first occurence of %c in %s: %p\n\n",s,str,sp);
    printf("------------\n\n");

    printf("test for strcat\n\n");
    
    char str1[11]="dis";
    char str2[7]="un";
    char str3[]="content";
    char str4[]="improved";
    char str5[]="flight";


    printf("Using our function:\n");
    printf("Concatenation of %s and dis(array size:%d): %s\n",str3,mystrlen(str1),mystrcat(str1,str3));
    printf("Concatenation of %s and un(array size:7): %s\n",str4,mystrcat(str2,str4));
    printf("This is the next string(it was flight) intitialized after the previous one which overflowed: %s\n\n",str5);
    //printf("Concatenation of %s and %s: %s\n",s2,s3,mystrcat(s2,s3));

    char strng1[11]="dis";
    char strng2[7]="un";
    char strng3[]="content";
    char strng4[]="improved";
    char strng5[]="flight";

    printf("Using built-in function:\n");
    printf("Concatenation of %s and dis(array size:%d): %s\n",strng3,mystrlen(strng1),strcat(strng1,strng3));
    printf("Concatenation of %s and un(array size: 7): %s\n",strng4,strcat(strng2,strng4));
    printf("This is the next string(it was flight) intitialized after the previous one which overflowed: %s\n",strng5);
    //printf("Concatenation of %s and %s: %s\n",s2,s3,strcat(s2,s3));
    printf("------------\n\n");


    
    return 0;


}
