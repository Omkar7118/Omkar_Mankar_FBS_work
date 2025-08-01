#include<stdio.h>
typedef struct 
{
	int id,price;
	char bname[20],auther[10];
}book;
book store();
void display(book);
void main()
{
	book b[3];	
	for(int i=0;i<3;i++)
	{
		b[i]=store();
	}
	for(int i=0;i<3;i++)
	{
		display(b[i]);
	}
}
book store()
{
	book temp;
	printf("Enter book details :-");
	printf("\nEnter id : ");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter book name : ");
	gets(temp.bname);
	printf("Enter author name : ");
	gets(temp.auther);
	printf("Enter price : ");
	scanf("%s",&temp.price);
	return temp;
}
void display(book temp)
{
	printf("Id=%d book:%s Auther:%s price=%d\n",temp.id,temp.bname,temp.auther,temp.price);
}