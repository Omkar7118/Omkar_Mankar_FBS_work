#include<stdio.h>
void strfirst(char*,char);
void main()
{
	char str1[]="Hello";
	strfirst(str1,'l');
}
void strfirst(char* s1,char ch)
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==ch)
		{
			j=i;
			break;
		}
		i++;
	}
	while(s1[j]!='\0')
	{
		printf("%c",s1[j]);
		j++;
	}
}