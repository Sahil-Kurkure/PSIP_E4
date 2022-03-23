/*A men’s sports club keeps elaborate computerized records of all its members. 

The records contain typical information such as age, address, etc. of each person. 
But there is also information about whether a member is an active playing members, 
about whether he is married, and so on; 
if he is married the record contains information about his wife’s name, the no. of children and their names. 
Write a program which demonstrates how such a system might be implemented. 
Show how the names of the wives of all active playing members might be printed.*/

#include <stdio.h>
#include <string.h>

struct Member
{
    char name[20];
    char age[10];
    char address[50];
    char status[20];

    char marriage[10];
    int number;
    char wname[20];
    
    struct Cname
    {
        char cname[20];
    }c1,c2;

}Member1,Member2;


int store(struct Member *M,int *x);
int display(struct Member M,int x);

int main()
{
    int x1,x2;

    printf("-------------------------------------------------------------------------------------\n");
    printf("For 1st member --> \n");
    store(&Member1,&x1);
    printf("-------------------------------------------------------------------------------------\n");
    printf("For 2nd member --> \n");
    store(&Member2,&x2);
    printf("-------------------------------------------------------------------------------------\n");
    printf("1st Member's information -->\n");
    display(Member1,x1);
    printf("-------------------------------------------------------------------------------------\n");
    printf("2nd Member's information -->\n");
    display(Member2,x2);

}

int store(struct Member *M,int *x)
{

    printf("Enter the Member's name : ");
    fgets(M->name,20,stdin);

    printf("Enter the Member's age : ");
    fgets(M->age,10,stdin);

    printf("Enter the Member's address : ");
    fgets(M->address,50,stdin);

    printf("Enter the Member's status (active or inactive) : ");
    fgets(M->status,20,stdin);

    printf("Enter the Member's martial status (married or unmarried) : ");
    fgets(M->marriage,10,stdin);

    if(strlen(M->marriage)==9)
    {
        strcpy(M->wname,"N/A\n");
        *x=0;
        strcpy(M->c1.cname,"N/A\n");
        strcpy(M->c2.cname,"N/A\n");

    }
    else 
    {
        printf("Enter the Member's wife's name : ");
        fgets(M->wname,20,stdin);   

        printf("Enter the number of Member's children : ");
        scanf("%d",&M->number);

        getchar();
        *x=1;

        printf("Enter the Member's child's name : ");
        fgets(M->c1.cname,20,stdin);   

        printf("Enter the Member's child's name : ");
        fgets(M->c2.cname,20,stdin);                
        
    } 
}

int display(struct Member M,int x)
{
    printf("Member's name : %s",M.name);
    printf("Member's age : %s",M.age);
    printf("Member's address : %s",M.address);
    printf("Member's status : %s",M.status);
    printf("Member's martial status : %s",M.marriage);
    if(x==0)
    {
        printf("\nMember's wife's name : %s",M.wname);
        printf("Member's number of children : N/A\n");
    }
    if(x==1)
    {
        printf("Member's wife's name : %s",M.wname);
        printf("Member's number of children : %d \n",M.number);
    }
    printf("Member's 1st child's name : %s",M.c1.cname);
    printf("Member's 2nd child's name : %s",M.c2.cname);
}