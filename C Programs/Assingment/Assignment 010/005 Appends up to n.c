//Appends up to n characters from src to dest
#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="Hello";
	char str2[]=" Ji";
	strncat(str,str2,2);
	printf("%s",str);
}