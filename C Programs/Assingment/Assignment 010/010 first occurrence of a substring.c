//Returns pointer to the first occurrence of substring in a string
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello world";
	char* p=strstr(str1,"world");
	printf("%s",p);
}