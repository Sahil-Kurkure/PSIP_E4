/*Write a program to swap smallest and largest element in an array using pointers*/

#include <stdio.h>

int main()
{
    int array[]={64,25,12,22,11};

    int *p;
    p=&array[0];
    int max,min,m,n;

    max=*p;
    min=*p;

    int size = sizeof(array)/sizeof(array[0]);

    printf("Before Swapping --> \n");
    for(int j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }  

    for(int i=0;i<size;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
            m=i;
        }
        if(*(p+i)<min)
        {
            min=*(p+i);
            n=i;
        }
    }

    int temp = *(p+m);
    *(p+m) = *(p+n);
    *(p+n) = temp;

    printf("\nAfter Swapping --> \n");
    for(int j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }

    return 0;
}