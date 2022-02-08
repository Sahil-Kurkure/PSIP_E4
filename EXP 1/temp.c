#include <stdio.h>

void main()
{
  float f,c; // Fahrenheit,Celsius

 printf("Enter the temperature (Fahrenheit) : ");
 scanf("%f",&f);

 c = (f-32)*5/9; //Fahrenheit to Celsius formula
 printf("\nThe temperature in Celsius is =  %.2f Centigrade ",c);
    
}