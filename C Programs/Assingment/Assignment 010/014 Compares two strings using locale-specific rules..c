//Compares two strings using locale-specific ruless
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]="Hello";
	int res = strcoll(str1, str2);
	printf("%d",res);
}