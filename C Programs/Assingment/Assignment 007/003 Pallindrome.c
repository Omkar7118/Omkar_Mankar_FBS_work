#include<stdio.h>
void isPallindrome(int*);
void main()
{
	int number,temp;
	printf("Enter an number to check pallindrome : ");
	scanf("%d",&number);
	temp=number;
	isPallindrome(&number);
	if(number==temp)
	{
		printf("Number is pallindrome");
	}
	else
	{
		printf("Number is not pallindrome");
	}
}
void isPallindrome(int* n)
{
	int rev=0,reminder,temp;
	temp=*n;
	while(temp>0)
	{
		reminder=temp%10;
		rev=reminder+rev*10;
		temp=temp/10;
	}
	*n=rev;
}
