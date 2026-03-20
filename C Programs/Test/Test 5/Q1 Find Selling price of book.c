#include<stdio.h>
void SellingPrice(float);
void main()
{
	float price=5000;
	SellingPrice(price);
}
void SellingPrice(float price)
{	
	float discount;
	printf("Enter discount(10,20,30) for the book : ");
	scanf("%f",&discount);
	if(discount==10)
	{
		price=price-price*0.10;
	}
	else if(discount==20)
	{
		price=price-price*0.20;
	}
	else if(discount==30)
	{
		price=price-price*0.30;
	}
	printf("Selling price for %f discount is %f",discount,price);
}