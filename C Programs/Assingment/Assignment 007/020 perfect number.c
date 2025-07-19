#include<stdio.h>
void perfect();
void main()
{	
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	perfect(&number);
}
void perfect(int* number)
{
	int i=1,result=0;

	while(i<*number)
	{
		if(*number%i==0)
		{
			result=i+result;
		}
		i++;
	}
	if(result==*
	number)
	{
		printf("Number is perfect");
	}
	else
	{
		printf("Number is not perfect");
	}	
}

