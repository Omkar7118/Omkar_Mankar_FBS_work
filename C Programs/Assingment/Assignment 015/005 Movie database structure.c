#include<stdio.h>
#include<string.h>
typedef struct
{
	char title[20],director[20],genre[10];
	int release_year;
}movie;

void menu(movie*);
void add(movie*);
void search(movie* );
void update(movie* );
void display(movie* m);
int count=0;
void main()
{	
	movie m[5];
	int n=1;
	do
	{
		menu(m);
		printf("Enter 1 to continue or 0 to exit : ");
		scanf("%d",&n);
	}while(n==1);
}
void menu(movie* m)
{
	int choice;
	printf("Enter\n");
	printf("1.Add Movie\n");
	printf("2.Search Movie\n");
	printf("3.Update Movie\n");
	printf("4.Display Movie\n");	
	scanf("%d",&choice);
	if(choice==1)
	{
		add(m);	
	}	
	else if(choice==2)
	{
		search(m);	
	}
	else if(choice==3)
	{
		update(m);	
	}
	else if(choice==4)
	{
		display(m);
	}
}
void add(movie* m)
{
	int n;
	printf("Enter number of movies to add : ");
	scanf("%d",&n);
	count=count+n;
	printf("Enter movie details : \n");
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		
		printf("Enter name movie : ");
		gets(m[i].title);
		printf("Enter director name : ");
		gets(m[i].director);
		printf("Enter release year : ");
		scanf("%d",&m[i].release_year);
		fflush(stdin);
		printf("Enter genre : ");
		gets(m[i].genre);	
	}
}
void search(movie* m)
{	
	int flag=0;
	movie temp;
	printf("Enter movie to search\n");
	scanf("%s",temp.title);
	for(int i=0;i<count;i++)
	{
		if(strcmp(temp.title,m[i].title)==0)
		{	
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%s found\n ",temp.title);
	}
	else
	{
		printf("%s not found \n",temp.title);
	}
}
void update(movie* m)
{		
	int ch;
	movie temp;
	printf("Enter movie to update : \n");
	scanf("%s",temp.title);
	printf("Enter \n");
	printf("1.Update title\n");
	printf("2.Update director\n");
	printf("3.Update release year\n");
	printf("4.Update genre\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		movie temp1;
		for(int i=0;i<count;i++)
		{
			if(strcmp(temp.title,m[i].title)==0)
			{
				printf("Enter title : ");
				scanf("%s",temp1.title);
				strcpy(m[i].title,temp1.title);
			}
		}
	}
	if(ch==2)
	{	
		movie temp1;
		for(int i=0;i<10;i++)
		{
			if(strcmp(temp.title,m[i].title)==0)
			{
				printf("Enter director : ");
				scanf("%s",temp1.director);
				strcpy(m[i].director,temp1.director);
			}
		}
	}
	if(ch==3)
	{	
		movie temp1;
		for(int i=0;i<10;i++)
		{
			if(strcmp(temp.title,m[i].title)==0)
			{
				printf("Enter release year : ");
				scanf("%d",&temp1.release_year);
				m[i].release_year=temp1.release_year;
			}
		}
	}
	if(ch==4)
	{	
		movie temp1;
		for(int i=0;i<10;i++)
		{
			if(strcmp(temp.title,m[i].title)==0)
			{
				printf("Enter genre : ");
				scanf("%s",temp1.genre);
				strcpy(m[i].genre,temp1.genre);
			}
		}
	}
}
void display(movie* m)
{
	for(int i=0;i<count;i++)
	{
		printf("Movie title:%s director:%s release year=%d genre:%s\n",m[i].title,m[i].director,m[i].release_year,m[i].genre);
	}
}