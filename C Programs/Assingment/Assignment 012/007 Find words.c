#include<stdio.h>
int Findwords(char*);
void main()
{	
	int size;
	char str[20];
	printf("Enter your string : ");
	scanf("%[^\n]",str);
	printf("%d",Findwords(str));
}
int Findwords(char* s)
{	
	int count=1;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			count++;
		}
	}
	return count;
}