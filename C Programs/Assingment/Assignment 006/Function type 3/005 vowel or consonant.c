#include<stdio.h>
void vowel_consonants();
void main()
{	
	char c;
	printf("Enter an character : ");
	scanf("%c",&c);
	vowel_consonants(c);
}
void vowel_consonants(int c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("%c is vowel",c);
	}
	else
	{
		printf("%c is consonants",c);
	}	
}