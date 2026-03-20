//Duplicates up to n characters of a string into dynamically allocated memory
#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "Programming";
	char *copy = strndup(str, 5);
	printf("%s", copy);
	free(copy);
}