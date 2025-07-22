//Returns pointer to last occurrence of character in string
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char* p=strrchr(str1,'l');
	printf("%s",p);
}