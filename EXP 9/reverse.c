/*Write a program to reverse the position of all elements in the array using pointers.*/

#include <stdio.h>

int main()
{
    int array[]={64,25,12,22,11};

    int *p;
    p=&array[0];

    int size = sizeof(array)/sizeof(array[0]);

    printf("After Reversing : \n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }

    return 0;
}