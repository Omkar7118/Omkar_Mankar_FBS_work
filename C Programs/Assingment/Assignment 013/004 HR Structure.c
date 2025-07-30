#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	int salary;
	int commission;
};
void main()
{
	struct HR h1;
	printf("Enter id, name, salary, commission respectively : ");
	scanf("%d %s %d %d",&h1.id,&h1.name,&h1.salary,&h1.commission);
	printf("Id : %d , Name : %s ,Salary : %d ,Commission : %d",h1.id,h1.name,h1.salary,h1.commission);	
}