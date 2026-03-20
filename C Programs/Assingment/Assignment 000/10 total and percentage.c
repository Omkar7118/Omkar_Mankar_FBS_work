#include<stdio.h>
void main()
{
	float math,science,sst,hindi,english,total,percentage;
	printf("Enter marks of math,science,sst,hindi,english respectively : ");
	scanf("%f %f %f %f %f", &math, &science, &sst, &hindi, &english);
	total=math+science+sst+hindi+english;
	percentage=(total/500)*100;
	printf("Total marks of subjects is %f and Percentage is %f",total,percentage);
}