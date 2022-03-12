/*Write a C program temp.c that accepts a temperature in Fahrenheit and  prints the corresponding temperature in Celsius.*/

#include <stdio.h>

void main()
{
  float f,c; // Fahrenheit,Celsius

 printf("Enter the temperature (Fahrenheit) : ");
 scanf("%f",&f);

 c = (f-32)*5/9; //Fahrenheit to Celsius formula
 printf("\nThe temperature in Celsius is =  %.2f Centigrade ",c);
    
}
