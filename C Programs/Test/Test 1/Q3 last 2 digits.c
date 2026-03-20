#include<stdio.h>
void main()
{
	int n,result;
	printf("Enter any number : ");
	scanf("%d",&n);
	result=n%100;
	printf("Last two digits are %d",result);
}