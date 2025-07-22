//Copies up to n characters from src to dest
#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	char copy_str[6];
	strncpy(copy_str,str,2);
	printf("%s",copy_str);
}