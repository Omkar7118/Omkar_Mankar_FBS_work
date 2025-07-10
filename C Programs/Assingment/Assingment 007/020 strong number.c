#include<stdio.h>
int strong_number();
void main()
{	
	int x;
	x=strong_number();
	if(x==1)
		printf("strong number");
	else
		printf("not a strong number");
}
int strong_number()
{
	int number,original_number,reminder,result=0,i=1,f=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	original_number=number;
	while(number!=0)
	{
		reminder=number%10;
		while(i<=reminder)
		{
			f=i*f;
			i++;
		}
		i=1;
		result=f+result;
		f=1;
		number=number/10;
	}
	if(result==original_number)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
