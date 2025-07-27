#include<stdio.h>
int strlenght(char*);
void main()
{	
	char str[]="hello";
	printf("%d",strlenght(str));
	
}
int strlenght(char* s)
{
	int lenght=0,i=0;
	while(s[i]!='\0')
	{
		lenght++;
		i++;
	}
	return lenght;
}