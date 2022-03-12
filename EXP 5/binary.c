/*Perform search of a particular element on the above array using binary search.
Binary Search will search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. 
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. 
Otherwise narrow it to the upper half. 
Repeatedly check until the value is found or the interval is empty. 
We basically ignore half of the elements just after one comparison.

    1. Compare x with the middle element.
    2. If x matches with middle element, we return the mid index.
    3. Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
    4. Else (x is smaller) recur for the left half.
*/

#include <stdio.h>

void sort(int array[],int size);                
int search(int array[],int A,int size,int X);   
int main()
{
    int array[] = {64,25,12,22,11};             
    int size = sizeof(array)/sizeof(array[0]);  

    int X,S;                                      
    printf("Enter a number for search : ");
    scanf("%d",&X);                             

    printf("Before Sorting : ");               
    for (int i=0;i<size;i++)                     
    {
        printf("%d,",array[i]);
    }

    sort(array,size);                   

    printf("\nAfter Sorting : ");       
    for(int j=0;j<size;j++)             
    {
        printf("%d,",array[j]);         
    }


    S=search(array,0,size-1,X);

    if (S!=-1)
    {                                          
        printf("\nThe element %d is at index %d",X,S);
    }    
    else
    {   
        printf("\nThe element %d does not exist in the array",X);
    }
    return 0;
}

void sort(int array[],int size)     
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
    }
}

int search(int array[],int A,int size,int X)       
{
    while(A<=size)                      
    {
        int pos = A + (size-A)/2;               
 
        if(array[pos]==X)                         
        {
            return pos;
        }
        if (array[pos]>X)                      
        {
            size=pos-1;                                       
        }
        else                               
        {
            A=pos+1;                        
        }
    }
    return -1;                 
}
