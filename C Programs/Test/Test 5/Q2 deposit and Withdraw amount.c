#include<stdio.h>
void menu(int);
void main()
{
	int amount=5000;
	menu(amount);
}
void menu(int amount)
{	
	int choice,n;
	printf("Enter \n1.Deposit \n2.Withdraw \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter amount you want to deposit : ");
		scanf("%d",&n);
		amount=amount+n;
		printf("Your balance is %d",amount);
	}
		if(choice==2)
		{	
		if(amount>3000)
		{
			printf("Enter amount you want to withdraw : ");
			scanf("%d",&n);
			amount=amount-n;
			printf("Your balance is %d",amount);
		}
		else
		{
			printf("your amount is less than 3000 you cannot withdraw");
		}
	}
}