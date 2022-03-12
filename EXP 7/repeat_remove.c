/*Write a program to delete all repeated words in string.
Input: welcome  to  C programming class , welcome again to C class !*/ 

#include <stdio.h>
#include <string.h>

int check(int B[100],int i);
int work(char A[100][100],int i,int j,int f,int B[20],int x,int p,int q);

int main() 
{
    char string[100];
    char A[100][100];
    int B[100];

    printf("Enter the string : ");
    fgets(string,sizeof(string),stdin);  
    printf("-----------------------------------------------------------------------------------\n");

    int n = strlen(string);
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(string[i]==' ')
            count++;
    }

    int k=-1;
    int r=0;
    for(int i=0;i<count+1;i++)
    {   
        r=0;
        for(int j=k+1;j<n;j++)
        {
            
            if(string[j]==' ')
            {   
                k=j;
                break;
            }
            else
            {
                A[i][r]=string[j];
                r++;
            }
        }  
    }

    printf("Inputed String : \n");
    puts(string);

    int f=0,m=0,x=0;
                    
    for(int i=0;i<count+1;i++)
    {
        for(int j=i+1;j<count+1;j++)
        {   
            f=0;
            if(j==count)
            {
                work(A,i,j,f,B,x,strlen(A[i]),strlen(A[j])-1);
            }
            else
            {
                work(A,i,j,f,B,x,strlen(A[i]),strlen(A[j]));
                x++;
            }
        }
    }


    printf("\nAfter deleting the repeated words we get the output string as : \n");
    for(int i=0;i<count+1;i++)
    {   
        if(check(B,i)==1)
        {
            continue;
        }
        else
        {
            for(int j=0;j<strlen(A[i]);j++)
            {
                printf("%c",A[i][j]);
            }
        }
        printf(" ");
    }
    printf("-----------------------------------------------------------------------------------\n");
    return 0;
}

int check(int B[100],int i)
{   
    int c;
    for(int a=0;a<100;a++)
    {
        if(i==0)
        {
            c=0;
            break;
        } 
        else if(i==B[a])
        {
            c=1;
            break;
        }
        else
        {
            c=0;
        }
    }
    return c;
}

int work(char A[100][100],int i,int j,int f,int B[20],int x,int p,int q)
{
    if(p==q)
    {
        for(int a=0;a<p;a++)
        {
            if(A[i][a]!=A[j][a])
            {
                f=1;
                break;
            }
            else if(A[i][a]==A[j][a])
            {
                f=0;
            }
        }
        if(f==0)
        {
            B[x]=j;
            x++;
        }
    }  
}