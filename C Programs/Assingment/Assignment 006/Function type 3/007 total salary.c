#include<stdio.h>

void findsalary(float );

void main()
{	
	float salary;
	printf("Enter your basic salary: ");
	scanf("%f", &salary);
	findsalary(salary);	
int findsalary(float salary)
{	
voidoat da, ta, hra, total_salary;
	if (salary <= 5000)
	{
		da = 10;
		ta = 20;
		hra = 25;
	}
	else
	{
		da = 15;
		ta = 25;
		hra = 30;
	}
	
	total_salary = salary + (salary * (da + ta + hra) / 100);
	
	printf("Your total salary is : %f\n", total_salary);
}