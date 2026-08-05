#include<stdio.h>

struct Player
{
	char name[200];
	int matches;
	int runs;
	int wickets;
	 
};

void accept(struct Player p[]);
void display(struct Player p[]);
void maxRuns(struct Player p[]);
void maxwickets(struct Player p[]);

int main()
{
	struct Player p[10];
	
	accept(p);
	
	printf("\nPlayer Information");
	display(p);
	
	printf("\nPlayer with maximum Runs");
	maxRuns(p);
	
	printf("\nPlayer with maximum wickets");
	maxwickets(p);
	
}

void accept(struct Player p[])
{
	int i;
	for(i=0 ; i<10;i++)
	{
		printf("\nEnter details of player %d\n",i+1);
		
		printf("Enter Name: ");
		scanf("%s",&p[i].name);
		
		printf("Enter Matches Played");
		scanf("%d",&p[i].matches);
		
		printf("Enter Runs");
		scanf("%d",&p[i].runs);
		
		printf("Enter Wickets");
		scanf("%d",&p[i].wickets);
		}
}
void display(struct Player p[])
{
	int i ;
	for(i=0 ; i<10;i++)
	{
		printf("\nPlayer %d",i+1);
		printf("\nName %s",p[i].name);
		printf("\nMatches%d",p[i].matches);
	    printf("\nRuns %d",p[i].runs);
	    printf("\nWickets%d",p[i].wickets);
	}
}
void maxRuns(struct Player p[])
{
	int i,max=0;
	for(i=0;i<10;i++)
	{
		if(p[i].runs > p[max].runs)
		{
			max = i;
			
		}
	}
	printf("\nName %s",p[max].name);
	printf("\nMatches%d",p[max].matches);
	printf("\nRuns %d",p[max].runs);
	printf("\nWickets%d",p[max].wickets);
}
void maxwickets(struct Player p[])
{
	int i,max = 0;
	for(i=1;i<10;i++)
	{
		if(p[i].wickets>p[max].wickets)
		{
			max = i;
		}
	}
	printf("\nName %s",p[max].name);
	printf("\nMatches%d",p[max].matches);
	printf("\nRuns %d",p[max].runs);
	printf("\nWickets%d",p[max].wickets);
}

	
