#include<stdio.h>
void findVowel(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	findVowel(str);
}
void findVowel(char* s)
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("%c ",s[i]);
		}
	}
}