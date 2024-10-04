//program to calculate simple interest
/*
program to calculate simple interest by acccepting the principalAmount,time and rate values
Author:Moses
Date:03/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main() {
 float principal,time,rate,simpleInterest;
//calculating simple interest
simpleInterest=(principal*time*rate)/100;
 printf("simpleInterest is %.2f",simpleInterest);
return 0;
}