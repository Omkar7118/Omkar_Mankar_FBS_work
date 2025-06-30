#include<stdio.h>
void main()
{
	char c;
	
	printf("Enter a character :");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	{
		printf("%c is Uppercase character",c);
	}
	else
	{
		printf("%c is Lowercase character",c);
	}
}