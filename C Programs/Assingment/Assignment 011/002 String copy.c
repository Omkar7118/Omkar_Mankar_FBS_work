#include<stdio.h>
char* strcopy(char*,char* );
void main()
{
	char str1[]="Hello";
	char str2[10];
	printf("%s",strcopy(str1,str2));
}
char* strcopy(char*src,char* dest)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return dest;
}