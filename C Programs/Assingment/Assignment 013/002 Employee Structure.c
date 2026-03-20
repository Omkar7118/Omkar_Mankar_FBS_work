#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int salary;
};
void main()
{
	struct employee e1;
	printf("Enter id , name ,salary of employee : ");
	scanf("%d %s %d",&e1.id,&e1.name,&e1.salary);
	printf("Employee id = %d , Name : %s ,Salary = %d",e1.id,e1.name,e1.salary);
}