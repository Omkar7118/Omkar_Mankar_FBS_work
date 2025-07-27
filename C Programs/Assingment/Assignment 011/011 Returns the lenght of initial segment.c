//Returns the length of the initial segment of str containing only characters from accept
#include<stdio.h>
int strSPN(char*,char*);
void main()
{
	char str1[]="HHHello";
	char str2[]="He";
	int res=strSPN(str1,str2);
	printf("%d",res);
}
int strSPN(char* s1,char* s2)
{
	int lenght=0,temp=0;
	int i=0,j=0;
	while(s1[i]!='\0')
	{	
		while(s2[j]!='\0')
		{	
			if(s1[i]==s2[j])
			{
				temp++;
			}
			j++;
		}
		i++;
		j=0;
		lenght=temp;
	}
	return lenght;
}