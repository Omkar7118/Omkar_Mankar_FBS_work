#include<stdio.h>
void reverse(char*);
void main()
{
	char str[20];
	printf("Enter your string : ");
	scanf("%s",&str);
	reverse(str);
}
void reverse(char* str)
{
	int lenght=0;
	char temp;
	for(int i=0;str[i]!='\0';i++)
	{
		lenght++;
	}
	int i=0,j=lenght-1;
	while(i<lenght/2)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	str[lenght]='\0';	
	printf("%s",str);
}