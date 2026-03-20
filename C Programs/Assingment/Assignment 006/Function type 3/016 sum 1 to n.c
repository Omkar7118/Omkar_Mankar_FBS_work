#include<stdio.h>
int sum();
void main()
{	
	int s,e;
	printf("Enter your starting and ending range : ");
	scanf("%d %d",&s,&e);
	sum(s,e);
}
int sum(int s,int e)
{
	int i;
	i=s+1 ;
	while(i<=e)
	{
		s=s+i;
		i++;
	 } 
 	printf("Sum of your number is %d",s);	
}