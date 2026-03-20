//Duplicates a string into dynamically allocated memory (heap)
#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "Hello";
	char *copy = strdup(str);
	printf("%s", copy);
	free(copy);
}