#include<stdio.h>
void pallindrone();
void main()
{	
	int number,r1;
	int d1,d2,d3;
	printf("Enter Any 3 digit number : ");
	scanf("%d",&number);
	pallindrone(number, r1,d3,d2,d1);	
}
void pallindrone(int number, int r1,int d3,int d2,int d1)
{
	
	r1=number%100;
	d3=r1%10;
	d2=r1/10;
	d1=number/100;
	if(d1==d3)
	{
		printf("%d is Pallindrone Number",number);
	}
	else
	{
		printf("%d is not Pallindrone Number",number);	
	}	
}