#include<stdio.h>
#include <stdlib.h>
char* strDup(char*);
void main()
{
	char str[]="Hello";
	printf("%s",strDup(str));
}
char* strDup(char* src)
{		
	char* dup=(char*)malloc(10*sizeof(char));
	int i=0;
	while(src[i]!='\0')
	{
		dup[i]=src[i];
		i++;
	}
	dup[i]='\0';
	return dup;
}