#include<stdio.h>
int strong_number();
void main()
{	
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=strong_number(number);
	if(res==number)
	{
		printf("%d is a strong number",number);
	}
	else
	{
		printf("%d is not a strong number",number);
	}
}
int strong_number(int number)
{
	int original_number,reminder,result=0,i=1,f=1;

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
	return result;
}
