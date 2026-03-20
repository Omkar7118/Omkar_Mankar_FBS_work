#include<stdio.h>
typedef struct 
{
	char name[10];
	int price,quantity;
}product;
product additem();
void total_price(product* ,int);
void main()
{	
	int no;
	printf("Enter total number items : ");
	scanf("%d",&no);
	product p[no];
	for(int i=0;i<no;i++)
	{
		p[i]=additem();
	}
	total_price(p,no);
}
product additem()
{
	product temp1;
	printf("Enter product details \n");
	fflush(stdin);
	printf("Enter name : ");
	gets(temp1.name);
	printf("Enter price : ");
	scanf("%d",&temp1.price);
	printf("Enter quantity : ");
	scanf("%d",&temp1.quantity);
	return temp1;
}
void total_price(product* temp2,int no)
{
	int tp,res=0;
	for(int i=0;i<no;i++)
	{
		tp=temp2[i].quantity*temp2[i].price;
		printf("Total price of %s is %d \n",temp2[i].name,tp);
		res=tp+res;
	}
	printf("Total price of all product is %d",res);
}