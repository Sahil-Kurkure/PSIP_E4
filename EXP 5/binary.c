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
