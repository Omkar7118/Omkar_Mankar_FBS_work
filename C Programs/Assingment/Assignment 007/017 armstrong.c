#include<stdio.h>
int armstrong();
void main()
{
	int x;
	x=armstrong();
	if(x==1)
		printf("Number is Armstrong");
	else
		printf("Number is not Armstrong");
}
int armstrong()
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
		return 1;
	}
	else
	{
		return 0;
	}	
}