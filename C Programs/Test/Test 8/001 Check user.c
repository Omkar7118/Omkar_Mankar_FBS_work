#include<stdio.h>
void main()
{
	int userid=101,tempid;
	int pass=4444,temppass;
	int random_no1=1234,random_no2;
	printf("Enter user id : ");
	scanf("%d",&tempid);
	printf("Enter password : ");
	scanf("%d",&temppass);
	if(userid==tempid&&pass==temppass)
	{
		printf("Random number=%d\n",random_no1);
		printf("Enter same number : ");
		scanf("%d",&random_no2);
		if(random_no1==random_no2)
		{
			printf("Success");
		}
		else
		{
			printf("Failed");
		}
	}
	else
	{
		printf("Incorrect userid or password");
	}
}