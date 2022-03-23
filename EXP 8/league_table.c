/*A league table consists of a set of N records each representing the performance of a team.

A record contains team name, no. of games played, no. of games won, no. of games drawn, 
no. of games lost, no. of goals scored and no. of points awarded (2 for a win and 1for a draw). 
Write a program which inputs a positive integer N, N records of the form above, 
a positive integer M, the results of M games in the form, team1 goals scored team2 goals scored. 
Based on the results of these M games, the program should update the records and display the updated records*/

#include <stdio.h>
#include <string.h>

struct Record
{
    char name[20];
    int games;
    int won; 
    int drawn;
    int lost;
    int goals;
    int points;

}std[5];


int store(struct Record *M,int n);
int display(struct Record *M,int n);

int main()
{
    int n,m,a,b;

    printf("Number of Records : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------------------------------\n");

    store(std,n);
    display(std,n);

    //demo code for team 1 and team 2 only
    printf("Number of games played between Team 1 and Team 2 : ");
    scanf("%d",&m);

    printf("Number of games won by Team 1 : ");
    scanf("%d",&a);

    printf("Number of games won by Team 2 : ");
    scanf("%d",&b);

    std[0].games+=m;
    std[1].games+=m;

    std[0].won+=a;
    std[1].won+=b;

    std[0].lost+=b;
    std[1].lost+=a;

    std[0].drawn=(std[0].games-(std[0].won+std[0].lost));
    std[1].drawn=(std[1].games-(std[1].won+std[1].lost));

    printf("------------------------------------------------------------------------------------------------\n");
    display(std,n);
}

int store(struct Record *M,int n)
{

    for(int i=0;i<n;i++)
    {
        printf("For Team %d -->\n",i+1);
        getchar();

        printf("Enter the Team's name : ");
        fgets(M->name,20,stdin);

        printf("Enter the number of games played : ");
        scanf("%d",&M->games);

        printf("Enter the number of games won : ");
        scanf("%d",&M->won);

        printf("Enter the number of games drawn : ");
        scanf("%d",&M->drawn);

        int Y;
        Y=(M->games)-(M->won + M->drawn);
        M->lost=Y;

        printf("Enter the number of goals scored : ");
        scanf("%d",&M->goals);

        M++;
        printf("------------------------------------------------------------------------------------------------\n");
    }

}

int display(struct Record *M,int n)
{
    for(int i=0;i<n;i++)
    {
        int X;
        X=(2*M->won)+(1*M->drawn);
        M->points=X;

        printf("Team %d -->\n",i+1);
        printf("Team's name : %s",M->name);
        printf("Number of games Played : %d\n",M->games);
        printf("Number of games Won : %d\n",M->won);
        printf("Number of games Drawn : %d\n",M->drawn);
        printf("Number of games Lost : %d\n",M->lost);
        printf("Number of goals Scored : %d\n",M->goals);
        printf("Total Points : %d\n",M->points);
        M++;
        printf("------------------------------------------------------------------------------------------------\n");
    }
}