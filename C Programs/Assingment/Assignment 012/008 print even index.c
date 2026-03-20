#include<stdio.h>
char* printeven(char*,char*);
void main()
{
	char str1[10];
	char str2[10];
	printf("Enter your string : ");
	scanf("%s",str1);
	printf("%s",printeven(str1,str2));
}
char* printeven(char* s1,char* s2)
{		
	int j=0;
	for(int i=0;s1[i]!='\0';i++)
	{	
		if(i%2!=0)
		{
			s2[j]=s1[i];
			j++;
		}
		
	}
	s2[j]='\0';
	return s2;
}