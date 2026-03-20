#include<stdio.h>
typedef struct 
{
	int hr,min,sec;
}time;
time storetime();
time convert(time*);
void display(time );
void main()
{
	time t1,t2,t3;
	t1=storetime();	
	t2=storetime();	
	
	display(t1);
	display(t2);
	t3.hr=t1.hr+t2.hr;
	t3.min=t1.min+t2.min;
	t3.sec=t1.sec+t2.sec;
	printf("Addition of two time is : ");
	t3=convert(&t3);
	display(t3);
}
time storetime()
{
	time temp1;
	printf("Enter time :-\n");
	printf("Enter hours : ");
	scanf("%d",&temp1.hr);
	printf("Enter min : ");
	scanf("%d",&temp1.min);
	printf("Enter sec : ");
	scanf("%d",&temp1.sec);
	temp1=convert(&temp1);
	return temp1;
}
time convert(time* temp2)
{
	int total_sec,tempmin;
	time result;
	total_sec=temp2->hr*3600+temp2->min*60+temp2->sec;
	result.hr=total_sec/3600;
	tempmin=total_sec/60;
	result.min=tempmin%60;
	result.sec=total_sec%60;
	return result;
}
void display(time temp3)
{
	printf("%d hours %d min %d sec\n",temp3.hr,temp3.min,temp3.sec);
}