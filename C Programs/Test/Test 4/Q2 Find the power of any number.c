#include<stdio.h>
void main()
{
	int n,power;
	printf("Enter any number and power : ");
	scanf("%d %d",&n,&power);
	findPower(n,power);
}
findPower(int no,int power)
{	
	int result=1;
	for(int i=1;i<=power;i++)
	{
		result=result*no;
	}
	printf("%d^%d=%d",no,power,result);
}
