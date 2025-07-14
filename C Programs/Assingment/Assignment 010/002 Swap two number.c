#include<stdio.h>
void swap();
void main()
{
	int a,b;
	printf("Enter a and b before swap : ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After Swap a is %d and b is %d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}