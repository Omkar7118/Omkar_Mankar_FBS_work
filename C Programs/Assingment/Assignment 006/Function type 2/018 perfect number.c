#include<stdio.h>
int perfect();
void main()
{	
	int x;
	x=perfect();
	if(x==1)
		printf("Number is perfect");
	else
		printf("Number is not perfect");
}
int perfect()
{
	int number,i=1,result=0;
	printf("Enter a number : ");
	scanf("%d",&number);
	while(i<number)
	{
		if(number%i==0)
		{
			result=i+result;
		}
		i++;
	}
	if(result==number)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

