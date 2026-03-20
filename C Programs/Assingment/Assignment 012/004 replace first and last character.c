#include<stdio.h>
char* replaceFL(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	printf("%s",replaceFL(str));
}
char* replaceFL(char* s)
{	
	int count=0,temp;
	for(int i=0;s[i]!='\0';i++)
	{
		count++;
	}
	count--;
	temp=s[0];
	s[0]=s[count];
	s[count]=temp;
	return s;
}