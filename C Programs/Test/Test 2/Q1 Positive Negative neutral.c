#include<stdio.h>
void main()
{
	int n;
	printf("Enter an number : ");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n==0)
		{
			printf("%d is a Neutral number",n);
		}
		else
		{
			printf("%d is a Postive number",n);
		}
	}
	else
	{
		printf("%d is a Negative number",n);
	}	
}