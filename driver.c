#include <stdio.h>
#include <string.h>
#include "mystrings.h" 

int main() {

/*	char *s1="order";
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
  printf("Testing strstr:\n [ours] from first \"er\" in \"Peter Piper picked a peck of pickled peppers.\" %s\n",mystrstr(s4,s3));
  printf("Testing strstr:\n [lib] from first \"er\" in \"Peter Piper picked a peck of pickled peppers.\" %s\n",strstr(s4,s3));




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
	*/
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
    /*
    printf("------------\n\n");

	printf("test for strstr\n\n");

	s3="er";
  	s4="Peter Piper picked a peck of pickled peppers.";
	s5="zx";
    printf("Using our function:\n");

	sp=mystrstr(s4,s3);
    printf("Address of the first occurence of %s in %s: %p\n",s3,s4,sp);
	sp=mystrstr(s4,s5);
    printf("Addressz of the first occurence of %s in %s: %p\n\n",s5,s4,sp);

    printf("Using built-in function:\n");

    printf("Address of the first occurence of %s in %s: %p\n",s3,s4,strstr(s4,s3));
	printf("Address of the first occurence of %s in %s: %p\n",s5,s4,strstr(s4,s5));
    */
    

    printf("------------\n\n");

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