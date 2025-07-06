#include<stdio.h>
void main()
{
	int lenght,width,perimeter;
	printf("Enter lenght and width of rectangle : ");
	scanf("%d %d", &lenght, &width);
	perimeter=2*(lenght+width);
	printf("Perimeter of rectangle is %d",perimeter);
}