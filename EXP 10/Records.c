/*Set up a file containing vehicle rEcords which hold registration number and owner information (name and address). 
Write a program which, given a vehicle’s registration number, will rapidly retrieve and print the owner information*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("vehicle.txt","w");

    int n,x;
    char str1[100],str2[100],A[11],B[11];
    
    printf("Enter the number of vehicles : ");
    scanf("%d",&n);
    getchar();

    //Input format--> Number-Name-Address 
    //Eg. MH08HH5657-ABC-XYZ
    for(int i=0;i<n;i++)
    {
        printf("Enter the Registration Number, Name and Address : "); //only enter 10 digit registration number 
        fgets(str1,100,stdin);                                        //and add "-" for seperating two different categories.
        fprintf(fp,"%s",str1);
    }
    fclose(fp);

    FILE *ptr;
    ptr=fopen("vehicle.txt","r");

    printf("-------------------------------------------------------------------------\n");
    printf("Enter the registration number you want to search : ");
    fgets(A,11,stdin);

    while(fgets(str2,100,ptr)!=NULL)
    {
        for(int i=0;i<10;i++)
        {
            if(A[i]==str2[i])
                x=1;
            else
            {
                x=0;
                break;
            }
        }
    
        char Z[1]="-";
        int z=0;
        if(x==1)
        {   
            
            printf("REGISTRATION NUMBER : ");
            for(int i=0;i<strlen(str2);i++)
            {
                if(str2[i]==Z[0] && z==0)
                {
                    printf("\nNAME :");
                    z=1;
                }
                else if(str2[i]==Z[0] && z==1)
                    printf("\nADDRESS : ");
                else
                    printf("%c",str2[i]);
            }
            break;
        }
    }
    if(x==0)
        printf("Record not found!");
    printf("\n-------------------------------------------------------------------------\n");
    fclose(ptr);
    return 0;
    
}