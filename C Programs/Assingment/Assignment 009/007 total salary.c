#include<stdio.h>

int findsalary(float );

void main()
{	
	float salary,result;
	printf("Enter your basic salary: ");
	scanf("%f", &salary);
	result=findsalary(salary);	
	printf("Your total salary is : %f \n", result);
}

int findsalary(float salary)
{	
	float da, ta, hra, total_salary;
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
	return total_salary;
	
}