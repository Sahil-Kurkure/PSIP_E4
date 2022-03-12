/*The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 
The algorithm maintains two sub-arrays in a given array.
    1) The sub-array which is already sorted.
    2) Remaining sub-array which is unsorted.
Every iteration of selection sort, the minimum element (considering ascending order) from the unsorted sub-array is picked and moved to the sorted sub-array.

Following example explains the above steps:
arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4} and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4] and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4] and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4] and place it at beginning of arr[3...4]
11 12 22 25 64
*/

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
