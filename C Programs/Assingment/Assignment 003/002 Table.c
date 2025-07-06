#include<stdio.h>
void main()
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