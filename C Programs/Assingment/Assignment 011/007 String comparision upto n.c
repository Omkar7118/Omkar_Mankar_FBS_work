#include<stdio.h>
int strcmpn(char*,char*,int);
void main()
{
	char str1[]="Hello";
	char str2[]="Hello";
	int n=3;
	int res=strcmpn(str1,str2,n);
	printf("%d",res);
}
int strcmpn(char* s1,char* s2,int n)
{
	int i=0,flag=0;
	while(i!=n)
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