#include<stdio.h>
char* Remove(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	printf("%s",Remove(str));
}
char* Remove(char* s)
{
	int index;
	printf("Enter the index of string you want to remove : ");
	scanf("%d",&index);
	for(int i=index;s[i]!='\0';i++)
	{
		s[i]=s[i+1];
	}
	return s;
}