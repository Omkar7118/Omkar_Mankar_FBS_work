#include<stdio.h>
void table();
void main()
{	
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	table(&n);
}
void table(int* n)
{
	int o=0,i=1;

	while(i<=10)
	{
		o=*n*i;
		printf("%d ",o);
		i++;	
	}	
}