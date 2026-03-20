#include<stdio.h>
//void upp_low();
void upp_low(int c)
{
	if(c>='A'&&c<='Z')
	{
		printf("%c is Uppercase character",c);
	}
	else
	{
		printf("%c is Lowercase character",c);
	}	
}
void main()
{	
	char c;
	printf("Enter a character : ");
	scanf("%c",&c);
	upp_low(c);
}
