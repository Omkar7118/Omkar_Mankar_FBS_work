#include<stdio.h>
void armstrong();
void main()
{
	armstrong();
}
void armstrong()
{
	int number,original_number,result=0,reminder;
	printf("Enter a number : ");
	scanf("%d",&number);
	original_number=number;
	while(number!=0)
	{
		reminder=number%10;
		result=reminder*reminder*reminder+result;
		number=number/10;
	}
	if(result==original_number)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}	
}