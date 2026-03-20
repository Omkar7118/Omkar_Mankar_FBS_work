#include<stdio.h>
struct time
{
	int hours,min,sec;
};
struct time addTime();
void display(struct time);
void main()
{
	struct time t1,t2,t3;
	t1=addTime();
	t2=addTime();
	t3=addTime();
	
	display(t1);
	display(t2);
	display(t3);
}
struct time addTime()
{
	struct time temp;
	printf("Enter time in hours min sec : ");
	scanf("%d %d %d",&temp.hours,&temp.min,&temp.sec);
	return temp;
}
void display(struct time temp)
{
	printf("%d hour %d min %d sec\n",temp.hours,temp.min,temp.sec);	
}