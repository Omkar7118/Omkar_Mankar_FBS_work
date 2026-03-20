#include<stdio.h>
void amount();
void main()
{
	amount();
} 
void amount()
{
	float amount,total_amount,discount;
	char student;
	printf("Enter amount of your purchases : ");
	scanf("%f", &amount);
	printf("Are you a student ? answer in y or n : ");
	fflush(stdin);
	scanf("%c", &student);
	if(student=='y')
	{
		if(amount>=500)
		{
			discount=0.20*amount;
		}
		else
		{
			discount=0.10*amount;	
		}
	}
	else
	{
		if(amount>=600)
		{
			discount=0.15*amount;
		}
		else
		{
			discount=0;	
		}
	}
	total_amount=amount-discount;
	printf("Your total amount is %f ",total_amount);
	
}