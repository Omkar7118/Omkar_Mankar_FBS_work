#include<stdio.h>
int pallindrone();
void main()
{
	if(pallindrone())
		printf("Pallindrone Number");
	else
		printf("Not Pallindrone Number");		
}
int pallindrone()
{
	int number,r1;
	int d1,d2,d3;
	printf("Enter Any 3 digit number : ");
	scanf("%d",&number);
	r1=number%100;
	d3=r1%10;
	d2=r1/10;
	d1=number/100;
	if(d1==d3)
	{
		return 1;
	}
	else
	{
		return 0;	
	}	
}