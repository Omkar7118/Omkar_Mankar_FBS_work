#include<stdio.h>
struct distance
{
	int feet,inch;
};
struct distance addDistance();
void display(struct distance);
void main()
{
	struct distance d1,d2,d3;
	d1=addDistance();
	d2=addDistance();
	d3=addDistance();
	
	display(d1);
	display(d2);
	display(d3);
}
struct distance addDistance()
{
	struct distance temp;
	printf("Enter feet and inch : ");
	scanf("%d %d",&temp.feet,&temp.inch);
	return temp;
}
void display(struct distance temp)
{
	printf("%d feet %d inch\n",temp.feet,temp.inch);
}