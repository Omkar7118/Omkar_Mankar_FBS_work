#include<stdio.h>
void upp_low();
void main()
{
	upp_low();
}
void upp_low()
{
	char c;
	
	printf("Enter a character : ");
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