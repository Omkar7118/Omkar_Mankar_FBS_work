#include<stdio.h>
void main()
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
	 printf("Sum of your number is %d",s);
}