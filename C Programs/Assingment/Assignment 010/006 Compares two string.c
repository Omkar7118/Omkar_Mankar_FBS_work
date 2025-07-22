//Compares two strings lexicographically
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]=" Hello";
	int res=strcmp(str1,str2);
	printf("Prints if match %d or 0",res);
}