#include<stdio.h>
char* strcopy(char*,char*,int);
void main()
{
	char str1[]="Hello";
	char str2[10];
	int a=2;
	printf("%s",strcopy(str1,str2,a));
}
char* strcopy(char*src,char* dest,int a)
{
	int i=0;
	while(i!=a)
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return dest;
}