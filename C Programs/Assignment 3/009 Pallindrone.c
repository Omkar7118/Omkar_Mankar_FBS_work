#include<stdio.h>
void main()
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
	printf("%d ",rev);
	if(rev==og_number)
	{
		printf("%d is pallindrone",og_number);
	}
	else
	{
		printf("%d is not pallindrone",og_number);
	}
}