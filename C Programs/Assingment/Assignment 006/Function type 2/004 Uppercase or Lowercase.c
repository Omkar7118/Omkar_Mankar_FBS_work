#include<stdio.h>
int upp_low();
void main()
{
	if(upp_low())
		printf("Uppercase character");
	else
		printf("Lowercase character");
}
int upp_low()
{
	char c;
	
	printf("Enter a character : ");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}