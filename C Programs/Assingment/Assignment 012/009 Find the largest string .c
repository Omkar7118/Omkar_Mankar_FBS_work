#include<stdio.h>
void FindLargest(char*,char*);
void main()
{
	char str1[10];
	char str2[10];
	printf("Enter your 1st string : ");
	scanf("%s",str1);
	printf("Enter your 1st string : ");
	scanf("%s",str2);
	FindLargest(str1,str2);
}
void FindLargest(char* s1,char* s2)
{
	int lenght1=0,lenght2=0;
	for(int i=0;s1[i]!='\0';i++)
	{
		lenght1++;
	}
	for(int i=0;s2[i]!='\0';i++)
	{
		lenght2++;
	}
	if(lenght1>lenght2)
	{
		printf("1st string is greater than 2nd string");
	}
	else
	{
		printf("2nd string is greater than 1st string");
	}
}