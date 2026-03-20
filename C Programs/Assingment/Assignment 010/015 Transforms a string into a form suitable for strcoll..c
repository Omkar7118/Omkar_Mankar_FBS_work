//Transforms a string into a form suitable for strcoll comparison based on locale
#include<stdio.h>
#include<string.h>
void main()
{
	char src[] = "abc";
	char dest[10];
	size_t len = strxfrm(dest, src, 10);
	printf("%zu", len);
}