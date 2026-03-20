#include<stdio.h>
char* replace(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	printf("%s",replace(str));
}
char* replace(char* s)
{
	for(int i=0;s[i]!='\0';i++)\
	{
		if(s[i]=='a')
		{
			s[i]='$';
		}
	}
	return s;
}