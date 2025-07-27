#include<stdio.h>
char strFC(char*,char*);
void main()
{	
	char res;
	char str1[10]="Hello";
	char str2[10]="aello";
	res=strFC(str1,str2);
	printf("%c",res);
}
char strFC(char* s1,char* s2)
{	
	char ch;
	int flag=0;
	for(int i=0;flag==0;i++)
	{
		for(int j=0;s1[j]!='\0';j++)
		{
			if(s2[i]==s1[j])
			{
				ch=s1[j];	
				flag=1;
			}
		}
	}
	return ch;
}