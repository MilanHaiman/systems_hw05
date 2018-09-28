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
int main(){
  char *s1="order";
  char c='r';
  char *cp=mystrchr(s1,c);
  printf("Address of r in order: %p\n",cp);
  printf("String from first r: %s\n",cp);
}
