#include<stdio.h>
int sum();
void main()
{	
	int x;
	x=sum();
	printf("Sum of your number is %d",x);
}
int sum()
{
	int s,e,i;
	printf("Enter your starting and ending range : ");
	scanf("%d %d",&s,&e);
	i=s+1 ;
	while(i<=e)
	{
		s=s+i;
		i++;
	 } 
	 return s;	
}