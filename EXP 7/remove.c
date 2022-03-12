/*Write a program to remove all the characters from string except for the
alphabets. ( Remove Blank, spaces, digits, special char. etc..) */ 

#include <stdio.h>

int main() 
{   
    char string[100];
    
    printf("Enter the string: ");
    fgets(string,100,stdin);  
    printf("\n------------------------------------------------------------------------------------\n");

    printf("Inputed string : ");
    puts(string);
   

    int j;

    printf("The string after removing numbers and special characters is : ");
    for (int i=0;i<100;i++) 
    {
        if (!(string[i]>='a' && string[i]<='z' || string[i]>'A'&& string[i]<='Z')) 
            continue;
        else
            printf("%c",string[i]);
    }
    printf("\n------------------------------------------------------------------------------------\n");

    return 0;
}

