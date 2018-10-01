#include <stdio.h>
#include <string.h>
#include "mystrings.h" 

int main() {

	char *s1="order";
  char s2[10]="dis";
  char *s3="er";
  char *s4="Peter Piper picked a peck of pickled peppers.";
  char c='r';
  char *cp=mystrchr(s1,c);
  char *cp2=strchr(s1,c);
  char *concat=mystrcat(s2,s1);
  char *concat2=mystrcat(s2,s1);
  printf("Testing strchr:\n [ours] Address of r in order: %p\n",cp);
  printf("Testing strchr:\n [lib] Address of r in order: %p\n",cp2);
  printf("Testing strchr:\n [ours] String from first r: %s\n",cp);
  printf("Testing strchr:\n [lib] String from first r: %s\n",cp2);
  printf("Testing strcat:\n [ours] Concatenation of dis and order: %s\n",concat);
  printf("Testing strcat:\n [lib] Concatenation of dis and order: %s\n",concat2);
  printf("Testing strstr:\n [ours] %s\n",mystrstr(s4,s3));
  printf("Testing strstr:\n [lib] %s\n",strstr(s4,s3));




	char *s00 = "hello";
	printf("Testing strlen:\n [ours] length of \"hello\": %d\n", mystrlen(s00));
	printf("Testing strlen:\n [lib] length of \"hello\": %d\n", strlen(s00));
	s00 = "";
	printf("Testing strlen:\n [ours] length of empty string: %d\n", mystrlen(s00));
	printf("Testing strlen:\n [lib] length of empty string: %d\n", strlen(s00));

	char s01[] = "hello";
	char s02[] = "hill";
	printf("Testing strcmp:\n [ours] comparing \"hello\" and \"hill\", should be negative: \t%d\n",mystrcmp(s01,s02)); 
	printf("Testing strcmp:\n [lib] comparing \"hello\" and \"hill\", should be negative: \t%d\n",strcmp(s01,s02)); 
	char s03[] = "abce";
	char s04[] = "abcd";
	printf("Testing strcmp:\n [ours] comparing \"abce\" and \"abcd\", Should be positive: \t%d\n",mystrcmp(s03,s04));
	printf("Testing strcmp:\n [lib] comparing \"abce\" and \"abcd\", Should be positive: \t%d\n",strcmp(s03,s04));
	printf("Testing strcmp:\n [ours] comparing \"abcd\" and \"abcd\", Should be positive: \t%d\n",mystrcmp(s04,s04));
	printf("Testing strcmp:\n [lib] comparing \"abcd\" and \"abcd\", Should be positive: \t%d\n",strcmp(s04,s04));

	char s05[] = "hello";
	char s06[] = "goodbye";
	printf("Testing strncpy:\n");
	printf("s5:%s\n", s05);
	printf("s6:%s\n", s06);
	mystrncpy(s05,s06,3);
	printf("[ours] s5 after mystrncpy(s5,s6,3):%s\n", s05);
	char s07[] = "hello";
	char s08[] = "goodbye";
	printf("s7:%s\n", s07);
	printf("s8:%s\n", s08);
	strncpy(s07,s08,3);
	printf("[lib] s7 after strncpy(s7,s8,3):%s\n", s07);
}