//Returns the length of the initial segment of str containing none of the characters from reject
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello123";
	size_t len = strcspn(str1,"1");
	printf("%zu",len);
}