//Finds the first occurrence in str of any character from accept
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello world";
	char* p=strpbrk(str1,"r");
	printf("%s",p);
}