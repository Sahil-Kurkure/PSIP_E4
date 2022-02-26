#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of employees : ");
    scanf("%d",&n);

    int age[n][2];

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            if (j==0)
            {
                printf("Enter the %d employee number : ",i+1); //5 digit number
                scanf("%d",&age[i][j]);
            }
            else 
            {
                printf("Enter the age of the %d employee : ",i+1);
                scanf("%d",&age[i][j]);
            }
        }
    }

    for (int i=0;i<n;i++)
    {
        int temp = 65 - age[i][1];
        age[i][1]=temp+2022;
    }


    for(int i=0;i<n;i++)
    {
        printf("The retirement age of Employee number %d is : %d \n",age[i][0],age[i][1]);
    }

    return 0;
}