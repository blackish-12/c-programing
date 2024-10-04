//c-program to implement customer requirements for a loan
/*
Program to implement customers requirements for a loan
Author:Moses
Date:03/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main(){
    int age;
    float income;
    //user-friendly props age and income
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your annual income:");
    scanf("%f",&income);
     //criteria for loan
     if(age>=21&&income>=21000){
         printf("congratulation you qualify for a loan.");
     }else {
         printf("unfortunately,we are unable to offer you a loan at this time.");
     }
     
    return 0;
}
