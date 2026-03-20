#include<stdio.h>
struct complex
{
	int real,imaginary;
};
struct complex addComplex();
void display(struct complex);
void main()
{
	struct complex c1,c2,c3;
	c1=addComplex();
	c2=addComplex();
	c3=addComplex();
	
	display(c1);
	display(c2);
	display(c3);
}
struct complex addComplex()
{
	struct complex temp;
	printf("Enter real and imaginary : ");
	scanf("%d %d",&temp.real,&temp.imaginary);
	return temp;
}
void display(struct complex temp)
{
	printf("real=%d imaginary=%d\n",temp.real,temp.imaginary);
}
