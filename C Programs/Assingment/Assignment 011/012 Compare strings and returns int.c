#include<stdio.h>
int strcompare(char*,char*);
void main()
{
	char str1[10],str2[10];
	printf("Enter 1st string : ");
	scanf("%s",str1);
	printf("Enter 2nd string : ");
	scanf("%s",str2);
	printf("%d",strcompare(str1,str2));
}
int strcompare(char* s1,char* s2)
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
	if(lenght1>=lenght2)
	{
		if(lenght1==lenght2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return -1;
	}
}