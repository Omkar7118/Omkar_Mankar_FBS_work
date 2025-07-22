//Compares up to n characters of two strings
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]=" Hello";
	int res=strncmp(str1,str2,3);
	printf("%d",res);
}