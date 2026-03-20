#include<stdio.h>
int pallindrone();
void main()
{
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=pallindrone(number);
	if(res==number)
	{
		printf("%d is pallindrone",number);
	}
	else
	{
		printf("%d is not pallindrone",number);
	}
}
int pallindrone(int number)
{
	int reminder,rev,og_number;

	og_number=number;
	while(number!=0)
	{
		reminder=number%10;
		number=number/10;
		rev=reminder+rev*10;
		
	}
	return rev;
}