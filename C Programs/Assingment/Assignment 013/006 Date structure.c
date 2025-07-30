#include<stdio.h>
struct Date
{
	int day;
	int month;
	int year; 
};
struct Date addDate();
void display(struct Date);
void main()
{	
	struct Date d1,d2,d3;
	d1=addDate();
	d2=addDate();
	d3=addDate();

	display(d1);
	display(d2);
	display(d3);
}
struct Date addDate()
{	
	struct Date temp;
	printf("Enter day month and year respectively : ");
	scanf("%d %d %d",&temp.day,&temp.month,&temp.year);
	return temp;
}
void display(struct Date temp)
{
	printf("%d/%d/%d\n",temp.day,temp.month,temp.year);
}
