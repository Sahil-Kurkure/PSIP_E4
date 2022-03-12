/* Write a C program intrst.c that calculates the total interest income on amount Rupees 5 lakhs in a period of 10 years. 
 Show the results for simple interest, compounded interest when the compounding is done annually,semi-annually, quarterly, monthly and daily. 
 Assume that the interest rate is 3.5% per year.*/

#include<stdio.h>
#include<math.h>

void main()
{
 float p,t,r,si,ci,n;   // principal,time period,intrest rate,simple interest, compound interest, number of time interest is calculated
    
 printf("Enter principle : "); 
 scanf("%f",&p);

 printf("Enter time : "); 
 scanf("%f",&t);

 printf("Enter rate : "); 
 scanf("%f",&r);
    
 si = (p * r * t)/100; // simple interest on principal for 10 years
 printf("Simple interest on Rs %0.2f in 10 years = %0.2f\n", p, si);
    
 n = 1;
 ci = p*( pow( (1 + (r/n)*0.01) , (t*n) ) ) - p; // formula to calculate compund interest annually 
 printf("Compound interest on Rs %0.2f in 10 years compounded annually = %0.2f\n", p, ci);

 n = 2;
 ci = p*( pow( (1 + (r/n)*0.01) , (t*n) ) ) - p; // formula to calculate compund interest semi annually 
 printf("Compound interest on Rs %0.2f in 10 years compounded semi-annually = %0.2f\n", p, ci);

 n = 4;   
 ci = p*( pow( (1 + (r/n)*0.01) , (t*n) ) ) - p; // formula to calculate compund interest quarterly 
 printf("Compound interest on Rs %0.2f in 10 years compounded quarterly = %0.2f\n", p, ci);
    
 n = 12;   
 ci = p*( pow( (1 + (r/n)*0.01) , (t*n) ) ) - p; // formula to calculate compund interest monthly 
 printf("Compound interest on Rs %0.2f in 10 years compounded monthly = %0.2f\n", p, ci);

 n = 365;  
 ci = p*( pow( (1 + (r/n)*0.01) , (t*n) ) ) - p; // formula to calculate compund interest daily
 printf("Compound interest on Rs %0.2f in 10 years compounded daily = %0.2f\n", p, ci);

  

}
