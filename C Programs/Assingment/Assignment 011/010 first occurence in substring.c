#include<stdio.h>
void strfsub(char*,char*);
void main()
{
	char str1[]="Hello world";
	char str2[]="world";
	strfsub(str1,str2);
}
void strfsub(char* s1,char* s2)
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==s2[j])
		{	
			printf("%c",s2[j]);
			j++;
		}
		i++;
	}
}