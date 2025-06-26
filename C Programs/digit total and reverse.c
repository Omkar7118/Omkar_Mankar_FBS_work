#include<stdio.h>
void main()
{
	int number=4321,r1,r2,r3,r4,total,reverse;
	int q1,q2,q3;
	r1=number%10;
	q1=number/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	q3=q2/10;
	r4=q3;
	total=r1+r2+r3+r4;
	reverse=r1*1000+r2*100+r3*10+r4;
	printf("Total is %d Resverse is %d",total,reverse);
}