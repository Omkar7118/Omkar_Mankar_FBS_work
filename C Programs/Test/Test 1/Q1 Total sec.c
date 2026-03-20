#include<stdio.h>
void main()
{
	int h,m,s,total_sec;
	printf("Enter time in hh:mm:ss format : ");
	scanf("%d %d %d",&h,&m,&s);
	total_sec=h*60*60+m*60+s;
	printf("Total seconds is %d",total_sec);
}