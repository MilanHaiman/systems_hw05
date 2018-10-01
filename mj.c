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
  char *end=dest+mystrlen(dest);
  while(*source){
    *end=*source;
    source++;
    end++;
  }
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
  char *s1="order";
  char s2[10]="dis";
  char *s3="er";
  char *s4="Peter Piper picked a peck of pickled peppers.";
  char c='r';
  char *cp=mystrchr(s1,c);
  char *concat=mystrcat(s2,s1);
  printf("Address of r in order: %p\n",cp);
  printf("String from first r: %s\n",cp);
  printf("Concatenation of dis and order: %s\n",concat);
  printf("%s\n",mystrstr(s4,s3));
}
