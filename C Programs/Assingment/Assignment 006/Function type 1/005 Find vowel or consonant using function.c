#include<stdio.h>
void vowel_consonants();
void main()
{
	vowel_consonants();
}
void vowel_consonants()
{
	char c;
	printf("Enter an character : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("%c is vowel",c);
	}
	else
	{
		printf("%c is consonants",c);
	}	
}