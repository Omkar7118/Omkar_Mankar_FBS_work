#include<stdio.h>
void strong_number();
void main()
{
	strong_number();
}
void strong_number()
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
		printf("%d is a strong number",original_number);
	}
	else
	{
		printf("%d is not a strong number",original_number);
	}	
}
