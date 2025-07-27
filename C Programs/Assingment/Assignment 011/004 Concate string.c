#include<stdio.h>
char* strcon(char*,char*,char*);
void main()
{
	char str1[]="abc";
	char str2[]="defg";
	char str3[10];
	printf("%s",strcon(str1,str2,str3));
}
char* strcon(char* s1,char* s2,char* s3)
{
	int count=0;
	for(int i=0;s1[i]!='\0';i++)
	{	
		s3[i]=s1[i];
		count++;
	}
	int i=0;
	while(s2[i]!='\0')
	{
		s3[count]=s2[i];
		count++;
		i++;
	}
	s3[count]='\0';
	return s3;
		
}