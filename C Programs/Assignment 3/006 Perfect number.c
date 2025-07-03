#include<stdio.h>
void main()
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
		printf("Number is perfect");
	}
	else
	{
		printf("Number is not perfect");
	}
}

