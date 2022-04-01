/*A publishing company holds in a file details of all the books they publish. 
However, in the future, they wish to maintain two distinct files                    
(i) paperbacks (ii) hardbacks. 
Write a program which reads a file containing details of both paperback and hardback books and 
creates two files as specified above.
Assume that the first character in each input record indicates if the book is paperback(p) or hardback(h) or both(b).*/
#include <stdio.h>
#include <string.h>

int check(FILE *p,char str[50]);
int display(FILE *p);
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w");

    char x[50],ch,str[50];
    int n;
    printf("Enter the number of books : ");
    scanf("%d",&n);
    getchar();
    printf("Enter 'H' for hardcover,'P' for paperback,'B' for both at the start of each book's name \n");
    for(int i=0;i<n;i++)
    {   //"-" is must 
        printf("Enter the name of book : ");    //Eg. H-Percy Jackson
        fgets(x,50,stdin);                      //    B-Lord of the Rings
        fprintf(fp,"%s",x);                     //    P-Dan Brown
    }
    fclose(fp);

    FILE *ptr;
    ptr=fopen("abc.txt","r");

    FILE *fp1;
    fp1=fopen("Hardcover.txt","w");

    FILE *fp2;
    fp2=fopen("Paperback.txt","w");

    while(fgets(str,50,ptr)!=NULL) 
    {   
        char C[3]="HPB";
        for(int i=0;i<3;i++)
        {
            if(str[0]==C[i])
            {   
                if(i==0)
                    check(fp1,str);
                if(i==1)
                    check(fp2,str);
                if(i==2)
                {
                    check(fp1,str);
                    check(fp2,str);
                }
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(ptr);

    FILE *ptr1;
    ptr1=fopen("abc.txt","r");

    FILE *ptr2;
    ptr2=fopen("Hardcover.txt","r");

    FILE *ptr3;
    ptr3=fopen("Paperback.txt","r");

    printf("MAIN FILE --> \n");
    display(ptr1);

    printf("FIRST FILE FOR HARDCOVER BOOKS --> \n");
    display(ptr2);

    printf("SECOND FILE FOR PAPERBACK BOOKS --> \n");
    display(ptr3);    

    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    
    return 0;
    
}
int check(FILE *p,char str[50])
{
    for(int i=2;i<strlen(str);i++)
    {
        fprintf(p,"%c",str[i]);
    } 
}

int display(FILE *p)
{   
    char str[50];
    while(fgets(str,50,p)!=NULL)
    {
        printf("%s",str);
    }
    printf("\n-----------------------------------------------\n");
}
