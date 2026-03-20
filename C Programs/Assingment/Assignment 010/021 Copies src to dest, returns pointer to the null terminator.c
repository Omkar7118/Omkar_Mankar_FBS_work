//Copies up to n characters from src to dest and returns a pointer to the end of the copied string in dest.
#include<stdio.h>
#include<string.h>
void main()
{
	char dest[10];
	char *p = stpcpy(dest, "Hello");
	printf("%c", *(p-1));
}