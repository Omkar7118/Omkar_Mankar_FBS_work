#include<stdio.h>
int vowel_consonants();
void main()
{
	if(vowel_consonants())
		printf("Vowel");
	else
		printf("Consontants");
}
int vowel_consonants()
{
	char c;
	printf("Enter an character : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}