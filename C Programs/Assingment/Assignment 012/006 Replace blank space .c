#include<stdio.h>
char* ReplaceBS(char*);
void main()
{
	char str[20];
	printf("Enter your string : ");
	scanf("%[^\n]",str);
	printf("%s",ReplaceBS(str));
}
char* ReplaceBS(char* s)
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			s[i]='@';
		}
	}
	return s;
}