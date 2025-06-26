#include<stdio.h>
void main()
{
	int hours,minutes;
	printf("Enter minutes : ");
	scanf("%d", &minutes);
	hours=minutes/60;
	minutes=minutes%60;
	printf("Minutes in hours and minutes are %d hour %d minutes",hours,minutes);
}