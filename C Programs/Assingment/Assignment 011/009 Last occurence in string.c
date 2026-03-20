#include<stdio.h>
void strlast(char*,char);
void main()
{
	char str1[]="Hello";
	strlast(str1,'l');
}
void strlast(char* s1,char ch)
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==ch)
		{
			j=i;
		}
		i++;
	}
	while(s1[j]!='\0')
	{
		printf("%c",s1[j]);
		j++;
	}
}