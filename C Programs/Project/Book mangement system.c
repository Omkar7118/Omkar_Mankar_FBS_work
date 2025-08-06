#include<stdio.h>
#include<string.h>
typedef struct 
{
	int id;
	char name[20];
	char author[20];
	char category[20];
	double price;
	float rating;
}book;
void addBook(book*);
void removeBook(book*);
void searchBook(book*);
void showAuthor(book*);
void showCategory(book*);
void updateBook(book*);
void displaySort(book*);
void display(book*);
int n;
void main()
{	
	int choice,a;
	book b[10];
	do
	{
		printf("Enter\n");
		printf("1.Add book\n");
		printf("2.Remove book\n");
		printf("3.Search book\n");
		printf("4.Show Author's book\n");
		printf("5.Show Category's Books\n");
		printf("6.Update Book Data\n");
		printf("7.Display Sorted Books\n");
		printf("8.Display All Books\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			addBook(b);
		}
		else if(choice==2)
		{
			removeBook(b);
		}
		else if(choice==3)
		{
			searchBook(b);
		}
		else if(choice==4)
		{
			showAuthor(b);
		}
		else if(choice==5)
		{
			showCategory(b);
		}
		else if(choice==6)
		{
			updateBook(b);
		}
		else if(choice==7)
		{
			displaySort(b);
		}
		else if(choice==8)
		{
			display(b);
		}
		else
		{
			printf("Enter valid number\n");			
		}
		printf("Enter 1 to continue or 0 to exit : ");
		scanf("%d",&a);		
	}while(a==1);
}
void addBook(book* b)
{	
	printf("Enter number of books to add : ");
	scanf("%d",&n);
	printf("Enter book details :- \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter book id : ");
		scanf("%d",&b[i].id);
		printf("Enter book name : ");
		fflush(stdin);
		gets(b[i].name);
		printf("Enter book author : ");
		gets(b[i].author);
		printf("Enter book category : ");
		gets(b[i].category);
		printf("Enter book price : ");
		scanf("%lf",&b[i].price);
		printf("Enter book rating : ");
		scanf("%f",&b[i].rating);	
		printf(" \n");
	}
}
void removeBook(book* b)
{	
	int temp_id,j=0;
	printf("Enter book id to remove book : ");
	scanf("%d",&temp_id);
	for(int i=0;i<n;i++)
	{
		if(b[i].id==temp_id)
		{	
			for(int j=i;j<n;j++)
			{
				b[j]=b[j+1];
			}
			n--;
		}
	}
}
void searchBook(book* b)
{
	int temp_id;
	char temp_name[20];
	printf("Enter \n");
	printf("Id : ");
	scanf("%d",&temp_id);
	printf("Name : \n");
	fflush(stdin);
	gets(temp_name);
	for(int i=0;i<n;i++)
	{
		if(temp_id==b[i].id||strcmp(b[i].name,temp_name)==0)
		{
			printf("Book id or name are found \nBook details are\n");
			printf("Book id=%d\n",b[i].id);
			printf("Book name:%s\n",b[i].name);
			printf("Book author name:%s\n",b[i].author);
			printf("Book Category:%s\n",b[i].category);
			printf("Book Price=%lf\n",b[i].price);
			printf("Book Rating=%f\n",b[i].rating);
		}	
	}
}
void showAuthor(book* b)
{
	char temp_name[20];
	printf("Enter author name : ");
	fflush(stdin);
	gets(temp_name);
	for(int i=0;i<n;i++)
	{
		if(strcmp(b[i].author,temp_name)==0)
		{
			printf("Book name is %s\n",b[i].name);
		}
	}
}
void showCategory(book* b)
{
	char temp_category[20];
	printf("Enter category : ");
	fflush(stdin);
	gets(temp_category);
	for(int i=0;i<n;i++)
	{
		if(strcmp(b[i].category,temp_category)==0)
		{
			printf("Book name is %s\n",b[i].name);
		}
	}
}
void updateBook(book* b)
{	
	int no,temp_id;
	float temp_rating;
	double temp_price;
	printf("Enter \n1.price \n2.rating\n");
	scanf("%d",&no);
	if(no==1)
	{
		printf("Enter book id you want to update : ");
		scanf("%d",&temp_id);
		printf("Enter price : ");
		scanf("%lf",&temp_price);
		for(int i=0;i<n;i++)
		{
			if(b[i].id==temp_id)
			{
				b[i].price=temp_price;
			}
		}
	}
	else if(no==2)
	{
		printf("Enter book id you want to update : ");
		scanf("%d",&temp_id);
		printf("Enter rating : ");
		scanf("%f",&temp_rating);
		for(int i=0;i<n;i++)
		{
			if(b[i].id==temp_id)
			{
				b[i].rating=temp_rating;
			}
		}
	}
	else
	{
		printf("Enter valid number\n");
	}
}
void displaySort(book* b)
{	
	int a;
	book temp;
	double temp_price;
	float temp_rating;
	printf("Enter \n1.Sort price\n2.Sort rating\n");
	scanf("%d",&a);
	if(a==1)
	{
		for(int j=0;j<n;j++)
		{
		for(int i=0;i<n-1;i++)
		{
			if(b[i].price>b[i+1].price)
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	}
		for(int i=0;i<n;i++)
		{
			printf("%d. book details are \n",i+1);
			printf("Book name:%s\n",b[i].name);
			printf("Book Price=%lf\n",b[i].price);
		}
	}
	else if(a==2)
	{
		for(int j=0;j<n;j++)
		{
		for(int i=0;i<n-1;i++)
		{
			if(b[i].rating>b[i+1].rating)
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	}
		for(int i=0;i<n;i++)
		{
			printf("%d. book details are \n",i+1);
			printf("Book name:%s\n",b[i].name);
			printf("Book Price=%lf\n",b[i].rating);
		}
	}
	else
	{
		printf("Enter valid number\n");	
	}
}
void display(book* b)
{
	for(int i=0;i<n;i++)
	{
		printf("%d.Book details are \n",i+1);
		printf("Book id=%d\n",b[i].id);
		printf("Book name:%s\n",b[i].name);
		printf("Book author name:%s\n",b[i].author);
		printf("Book Category:%s\n",b[i].category);
		printf("Book Price=%lf\n",b[i].price);
		printf("Book Rating=%f\n",b[i].rating);
	}
}