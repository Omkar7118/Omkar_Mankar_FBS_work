#include<stdio.h>
void main()
{
	int n;
	printf("Press 1.To check number is even or odd \n");
	printf("Press 2.To check number is prime or not \n");
	printf("Press 3.To check number is pallindrome or not \n");
	printf("Press 4.To check number is positive, negative or zero \n");
	printf("Press 5.To reverse a number  \n");
	printf("Press 6.To find sum of digits \n");
	scanf("%d",&n);	
	if(n==1)
	{
		int a;
		printf("Enter an number : ");
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("%d is Even number",a);
		}
		else
		{
			printf("%d is Odd number",a);
		}
	}
	if(n==2)
	{
		int b,flag=0;
		printf("Enter an number : ");
		scanf("%d",&b);
		for(int i=2;i<b;i++)
		{
			if(b%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d is a Prime number",b);
		}
		else
		{
			printf("%d is not a Prime number",b);
		}
	}
	if(n==3)
	{
		int c,temp,reminder,rev=0,temp1;
		printf("Enter an number : ");
		scanf("%d",&c);
		temp=c;
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			rev=reminder+rev*10;
		}
		if(rev==c)
		{
			printf("%d is Pallindrone",c);
		}
		else
		{
			printf("%d is not Pallindrone",c);
		}			
	}
	if(n==4)
	{
		int d;
		printf("Enter an number : ");
		scanf("%d",&d);
		if(d>=0)
		{
			if(d==0)
			{
				printf("%d is Zero number",d);
			}
			else
			{
				printf("%d is Positive number",d);
			}
		}
		else
		{
			printf("%d is Negative number",d);
		}
	}	
	if(n==5)
	{
		int e,temp,rev=0,reminder;
		printf("Enter an number : ");
		scanf("%d",&e);
		temp=e;
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			rev=reminder+rev*10;
		}
		printf("%d reverse is %d",e,rev);	
	}
	if(n==6)
	{
		int f,temp,sum=0,reminder;
		printf("Enter an number : ");
		scanf("%d",&f);
		temp=f;
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			sum=sum+reminder;
		}
		printf("Sum of %d is %d",f,sum);
	}
}