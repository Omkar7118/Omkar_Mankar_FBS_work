#include<stdio.h>
void findsalary(float*,int);
void main()
{	
	int n;
	printf("Enter number of salaries : ");
	scanf("%d",&n);
	float salary[n];
	printf("Enter your basic salaries: ");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&salary[i]);
	}
	findsalary(salary,n);	
}
void findsalary(float* salary,int size)
{	
float da, ta, hra, total_salary;
	printf("Total salaries are ");
	for(int i=0;i<size;i++)
	{
		if (salary[i] <= 5000)
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
		total_salary = salary[i]+ (salary[i] * (da + ta + hra) / 100);
		printf("%f ", total_salary);
		total_salary=0;
		da=0;
		ta=0;
		hra=0;
	}
		
}