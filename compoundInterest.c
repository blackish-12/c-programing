//program to calculate compound interest 
/*
program to calculate compound interest accepting principalAmount,rate,time values
Author:Moses
Date:03/10/2024
*/
//preprocessor directive 
#include <stdio.h>
#include <math.h>
int main() {
 float principalAmount,rate,time,Amount,CI;
 
 printf("Enter the principalAmount:");
 scanf("%f",&principalAmount);
 printf("Enter the interest rate:");
 scanf("%f",&rate);
 printf("Enter the time:");
 scanf("%f",&time);
 
 Amount=principalAmount((pow((1+rate/100),)));
 CI=Amount-principalAmount;
 printf("The compund interest is; %f",CI);
 return 0;
 }