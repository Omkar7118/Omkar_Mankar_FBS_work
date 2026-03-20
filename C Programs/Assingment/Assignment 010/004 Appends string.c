//Appends the src string at the end of the dest string
#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="Hello";
	char str2[]=" Ji";
	strcat(str,str2);
	printf("%s",str);
}