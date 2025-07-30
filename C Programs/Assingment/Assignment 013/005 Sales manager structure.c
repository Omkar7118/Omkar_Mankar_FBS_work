#include<stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
void main()
{
	struct SalesManager s1;
	printf("Enter Id,name,salary,incentive,target of sales manager : ");
	scanf("%d %s %d %d %d",&s1.id,&s1.name,&s1.salary,&s1.incentive,&s1.target);
	printf("Id : %d  Name : %s Salary : %d Incentive : %d Target : %d",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
}