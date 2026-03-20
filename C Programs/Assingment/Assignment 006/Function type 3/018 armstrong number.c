#include<stdio.h>
int armstrong();
void main()
{
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=armstrong(number);
	if(res==number)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}	
}
int armstrong(int number)
{
	int original_number,result=0,reminder;

	original_number=number;
	while(number!=0)
	{
		reminder=number%10;
		result=reminder*reminder*reminder+result;
		number=number/10;
	}
	return result;
}