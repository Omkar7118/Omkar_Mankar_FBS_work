#include<stdio.h>
struct product
{
	int id,quantity,price;
	char name[20];
};
struct product addProduct();
void display(struct product);
void main()
{
	struct product p1,p2,p3;
	p1=addProduct();
	p2=addProduct();
	p3=addProduct();
	
	display(p1);
	display(p2);
	display(p3);
}
struct product addProduct()
{	
	struct product temp;
	printf("Enter id,name,quantity,price respectively : ");
	scanf("%d %s %d %d",&temp.id,&temp.name,&temp.quantity,&temp.price);
	return temp;	
}
void display(struct product temp)
{
	printf("id=%d Name:%s Quantity=%d Price=%d\n",temp.id,temp.name,temp.quantity,temp.price);
}