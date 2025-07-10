#include<stdio.h>
int pallindrone();
void main()
{	
	int x;
	x=pallindrone();
	if(x==1)
		printf("pallindrone");
	else
		printf("not pallindrone");
}
int pallindrone()
{
	int number,reminder,rev,og_number;
	printf("Enter a number : ");
	scanf("%d",&number);
	og_number=number;
	while(number!=0)
	{
		reminder=number%10;
		number=number/10;
		rev=reminder+rev*10;
		
	}
	if(rev==og_number)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}