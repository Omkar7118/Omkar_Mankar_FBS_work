//Copies the source string (src) into destination (dest)
#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	char copy_str[6];
	strcpy(copy_str,str);
	printf("%s",copy_str);
}