#include<stdio.h>
void main()
{
	int number,r1;
	int d1,d2,d3;
	printf("Enter Any 3 digit number :");
	scanf("%d",&number);
	r1=number%100;
	d3=r1%10;
	d2=r1/10;
	d1=number/100;
	if(d1==d3)
	{
		printf("%d is Pallindrome Number",number);
	}
	else
	{
		printf("%d is not Pallindrome Number",number);	
	}	
		
}