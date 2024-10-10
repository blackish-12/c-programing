//c-program for an electric bill calculator
#include <stdio.h>
int main() {
//prompting the user to input
 int CustomerID;
 char CustomerName; //%s
 float UnitConsumed;
 
  printf("Enter your CustomerID:");
  scanf("%d",&CustomerID);
  printf("Enter CustomerName:");
  scanf("%s",&CustomerName);
  printf("Enter the UnitConsumed:");
  scanf("%f",&UnitConsumed);
  
  //checking the given conditions
  double ChargesPerUnit;
  if(UnitConsumed<199){
  printf("ChargesPerUnit is Ksh 1.20\n",ChargesPerUnit);
  }
  else if(UnitConsumed<=400){
  printf("ChargesPerUnit is Ksh 1.50\n",&ChargesPerUnit);
  }
  else if(UnitConsumed <=600){
  printf("ChargesPerUnit is Ksh 1.80\n",&ChargesPerUnit);
  }
  else if(UnitConsumed > 601){
  printf("ChargesPerUnit is Ksh 2.00\n",&ChargesPerUnit);
  }
  
  //calculating total bill
  float TotalBill=UnitConsumed*ChargesPerUnit;
  printf("TotalBill is:");
  scanf("%1f",&TotalBill);
 return 0;
 }
 