#include<stdio.h>
int strcmp(char*,char*);
void main()
{
	char str1[]="Hello";
	char str2[]="Hello";
	int res=strcmp(str1,str2);
	printf("%d",res);
}
int strcmp(char* s1,char* s2)
{
	int i=0,flag=0;
	while(s1[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}