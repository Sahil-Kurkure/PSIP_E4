/*Write a program in C to calculate frequency count of each number in ARRAY. 

  Suppose input array is  [ 1 2 1 4 5 2 3 1 4 5 6 2 2 3 ]
  output :  1 is appearing 3 times , 2 is appearing  4 times ,  4 is appearing 2 times….
  5 is appearing 2 times , 3 is appearing 2 times ,  6 is appearing 1 times 
*/

#include <stdio.h>

int main()
{
    int array[100]; //14
    int count,n;
    printf("Enter the number of elements you want add to array : ");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for(int a=0;a<n;a++)
    {   
        int X;
        printf("Element %d (index %d) = ",a+1,a);
        scanf("%d",&X);
        array[a]=X;
    }

    int subarr[n];
    for(int b=0;b<n;b++)
    {   
        subarr[b]= -1;
    }

    for (int i=0;i<n;i++)
    {   
        if (array[i]!=subarr[i])
        {
            count = 1;
            for(int j=i+1;j<n;j++)
            {
                if (array[i]==array[j])
                {
                    subarr[j]=array[i];
                    count++;
                }
            }
            printf(" The number %d it is appearing %d times\n",array[i],count);
        }   
    }
    return 0;
}
