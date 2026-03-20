#include<stdio.h>
void search(char*);
void main()
{	
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	fflush(stdin);
	search(str);
}
void search(char* s)
{	
	int index=-1,flag=0;
	char a;
	printf("Enter a single character you want to search : ");
	scanf("%c",&a);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==a)
		{
			index=i;
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("%c found in %d index",a,index);
	}
	else
	{
		printf("Not found");
	}
}