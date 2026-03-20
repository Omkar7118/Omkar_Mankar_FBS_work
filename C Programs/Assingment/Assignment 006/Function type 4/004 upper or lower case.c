#include<stdio.h>
int upp_low();
void main()
{	
	char c,x;
	printf("Enter a character : ");
	scanf("%c",&c);
	x=upp_low(c);
	if(x==1)
		printf("%c is Uppercase character",c);
	else
		printf("%c is Lowercase character",c);
}

int upp_low(int c)
{
	if(c>='A'&&c<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}