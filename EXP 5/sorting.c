#include <stdio.h>

void sort(int array[],int size);
void printArray(int array[],int size);
int main()
{
    int array[] = {64,25,12,22,11};
    int size = sizeof(array)/sizeof(array[0]);

    printf("-----------------------------------------------------\n");
    printf("Before Sorting : ");

    for(int j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }

    printf("\n-----------------------------------------------------\n");
    
    sort(array,size);
    printf("After Sorting for the final time : \n");
    printArray(array,size);
    printf("\n-----------------------------------------------------\n");

    return 0;
}

void sort(int array[], int size)
{
    int pos;
    for(int i = 0; i < size-1; i++)
    {
        pos =i;
        for(int j = i+1; j < size; j++)
        {
            if (array[pos]>array[j])
                pos = j;
        }
        if (pos!=i) 
        {
            int temp = array[i];
            array[i]=array[pos];
            array[pos]=temp;
        }
        if(i<size-2)
        {
            printf("After sorting for %d time : \n",i+1);
            printArray(array,size);
            printf("\n-----------------------------------------------------\n");
        }
            
    }
}

void printArray(int array[],int size)
{   
    for (int i=0;i<size;i++)
    {    
        printf("%d ",array[i]);
    }
}
