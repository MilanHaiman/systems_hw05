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
  char *start=dest;
  while(*dest){
    dest++;
  }
  while(*source){
    *dest=*source;
    source++;
    dest++;
  }
  return start;

}
int main(){
  char *s1="order";
  char s2[10]="dis";
  char c='r';
  char *cp=mystrchr(s1,c);
  char *concat=mystrcat(s2,s1);
  printf("Address of r in order: %p\n",cp);
  printf("String from first r: %s\n",cp);
  printf("Concatenation of dis and order: %s\n",concat);
}
