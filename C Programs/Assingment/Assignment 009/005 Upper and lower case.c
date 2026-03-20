#include<stdio.h>
void upp_low(char*,int);
void main()
{	
	int n;
	printf("Enter number of your characters : ");
	scanf("%d",&n);
	char c[n];
	printf("Enter %d characters : ",n);
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		scanf("%c",&c[i]);
	}
	fflush(stdin);
	upp_low(c,n);
}
void upp_low(char* c,int n)
{	
	printf("Uppercase characters are  ");
	for(int i=0;i<n;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
		{
			printf("%c ",c[i]);
		}
	}
	printf("Lowercase characters are  ");
	for(int i=0;i<n;i++)
	{
		if(c[i]>='a'&&c[i]<='z')
		{
			printf("%c ",c[i]);
		}
	}
}
