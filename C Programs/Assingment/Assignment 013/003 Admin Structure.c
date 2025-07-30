#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
};
void main()
{
	struct Admin a1;
	printf("Enter id, name , salary and allowance of admin : ");
	scanf("%d %s %d %d",&a1.id,&a1.name,&a1.salary,&a1.allowance);
	printf("Id : %d ,Name : %s ,Salary : %d ,Allowance : %d ",a1.id,a1.name,a1.salary,a1.allowance);	
}