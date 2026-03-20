#include<stdio.h>
void menu();
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
	menu(&n);
}
void menu(int* n)
{
	
	if(*n==1)
	{
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even number are ");
	for(int i=0;i<no;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
		printf("\nOdd number are ");
	for(int i=0;i<no;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	}
	if(*n==2)
	{
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Prime numbers are ");
	for(int j=0;j<no;j++)
	{
		int flag=0;
		for(int i=2;i<arr[j];i++)
		{
			if(arr[j]%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d ",arr[j]);
		}
	}
	printf("\nNot Prime numbers are ");
	for(int j=0;j<no;j++)
	{	
		int flag=0;
		for(int i=2;i<arr[j];i++)
		{
			if(arr[j]%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag!=0)
		{
			printf("%d ",arr[j]);
		}
	}
	}
	if(*n==3)
	{	
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Pallindrone numbers are ");
	for(int i=0;i<no;i++)
	{
	int temp,reminder,rev=0,temp1;
	temp=arr[i];
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			rev=reminder+rev*10;
		}
		if(rev==arr[i])
		{
			printf("%d ",arr[i]);
		}
	}
		printf("\nNot Pallindrone numbers are ");
	for(int i=0;i<no;i++)
	{
	int temp,reminder,rev=0,temp1;
	temp=arr[i];
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			rev=reminder+rev*10;
		}
		if(rev!=arr[i])
		{
			printf("%d ",arr[i]);
		}
	}
	}
	if(*n==4)
	{
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no;i++)
	{
		if(arr[i]>=0)
		{
			if(arr[i]==0)
			{
				printf("\n%d is Zero number",arr[i]);
			}
			else
			{
				printf("\n%d is Positive number",arr[i]);
			}
		}
		else
		{
			printf("\n%d is Negative number",arr[i]);
		}
	}
	}	
	if(*n==5)
	{
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no;i++)
	{	
		int reminder,rev=0;
		int temp=arr[i];
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			rev=reminder+rev*10;
		}
		printf("%d reverse is %d\n",arr[i],rev);	
	}
	}
	if(*n==6)
	{	
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d Numbers : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no;i++)
	{
		int temp,sum=0,reminder;
		temp=arr[i];
		sum=0;
		while(temp!=0)
		{
			reminder=temp%10;
			temp=temp/10;
			sum=sum+reminder;
		}
		printf("Sum of %d is %d\n",arr[i],sum);
	}
	}
}	
