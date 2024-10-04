//c-program to calculate fine overdue for library books
/*
calculating fine rates overdue for library books
Author:Moses
Date:03/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main(){
    //variables and data type
   int Book_ID;
   int Return_Date;
   int Due_Date;
   int fineRate;
   int days_Overdue;
    printf("Enter the Book_ID:");
    scanf("%d",&Book_ID);
    printf("Enter the Due_Date:");
    scanf("%d",&Return_Date);
    printf("Enter the Return_Date:");
    scanf("%d",&Due_Date);
    
    //calculate days overdue
    days_Overdue=Return_Date-Due_Date;
    printf("days_Overdue is %d",days_Overdue);
    
    //criteria if,,,else
    if(days_Overdue<=7 &&fineRate==20){
    printf("fineRate is sh20",fineRate); }else if(days_Overdue>=8 &&fineRate==50)
    printf("fineRate is %d",fineRate);else if(days_Overdue >15 &&fineRate==100)
    printf("fineRate is %d",fineRate);
    
return 0;
}