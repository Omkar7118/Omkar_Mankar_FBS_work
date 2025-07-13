#include<stdio.h>
int perfect();
void main()
{	
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=perfect(number);
	if(res==number)
	{
		printf("Number is perfect");
	}
	else
	{
		printf("Number is not perfect");
	}
}
int perfect(int number)
{
	int i=1,result=0;

	while(i<number)
	{
		if(number%i==0)
		{
			result=i+result;
		}
		i++;
	}
	return result;
}

