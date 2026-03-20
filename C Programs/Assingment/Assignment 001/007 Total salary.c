#include<stdio.h>
void main()
{
	float salary,da,ta,hra,total_salary;
	printf("Enter your basic salary : ");
	scanf("%f",&salary);
	if(salary<=5000)
	{
		da=10;
		ta=20;
		hra=25;
		total_salary=(da+ta+hra)/100*salary+salary;
	
	}
	else
	{
		da=15;
		ta=25;
		hra=30;
		total_salary=(da+ta+hra)/100*salary+salary;
	}
	printf("Your total salary is %f",total_salary);
}