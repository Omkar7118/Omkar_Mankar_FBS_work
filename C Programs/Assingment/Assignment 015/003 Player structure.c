#include<stdio.h>
typedef struct 
{
	char name[20];
	int matches,runs,wickets;
}player;

player store();
void display(player);
void findMaxRunAndMaxWicket(player*);

void main()
{
	player p[10];	
	for(int i=0;i<10;i++)
	{
		p[i]=store();
	}
	for(int i=0;i<10;i++)
	{
		display(p[i]);
	}
	findMaxRunAndMaxWicket(p);
}

player store()
{
	player temp1;
	printf("Enter player details\n");
	fflush(stdin);
	printf("Enter name : ");
	gets(temp1.name);
	printf("Enter number of matches : ");
	scanf("%d",&temp1.matches);
	printf("Enter total number of runs : ");
	scanf("%d",&temp1.runs);
	printf("Enter total number of wickets : ");
	scanf("%d",&temp1.wickets);
	return temp1;
}

void display(player temp2)
{
	printf("Name:%s matches=%d runs=%d wickets=%d\n",temp2.name,temp2.matches,temp2.runs,temp2.wickets);
}

void findMaxRunAndMaxWicket(player* temp3)
{
	int max_run=temp3[0].runs; 
	int max_wicket=temp3[0].wickets;
	for(int i=1;i<10;i++)
	{
		if(max_run<temp3[i].runs)
		{
			max_run=temp3[i].runs;
		}
	}
	for(int i=1;i<10;i++)
	{
		if(max_wicket<temp3[i].wickets)
		{
			max_wicket=temp3[i].wickets;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(max_run==temp3[i].runs)
		{
			printf("Maximum runs is scored by %s\n",temp3[i].name);
		}
	}
	for(int i=0;i<10;i++)
	{
		if(max_wicket==temp3[i].wickets)
		{
			printf("Maximum wickets is scored by %s",temp3[i].name);
		}
	}
}