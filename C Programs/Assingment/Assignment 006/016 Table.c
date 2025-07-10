#include<stdio.h>
void table();
void main()
{
	table();
}
void table()
{
	int n,o=0,i=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=10)
	{
		o=n*i;
		printf("%d ",o);
		i++;	
	}	
}