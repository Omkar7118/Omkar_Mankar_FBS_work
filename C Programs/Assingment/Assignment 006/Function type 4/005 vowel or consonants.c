#include<stdio.h>
int vowel_consonants();
void main()
{	
	char c,x;
	printf("Enter an character : ");
	scanf("%c",&c);
	x=vowel_consonants(c);
	if(x==1)
		printf("%c is vowel",c);
	else
		printf("%c is consonants",c);
}
int vowel_consonants(int c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}