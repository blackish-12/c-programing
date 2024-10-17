//c-program for an electric bill calculator
#include <stdio.h>
#include <math.h>
int multiplication (float UnitConsumed, double ChargesPerUnit);

int main() {
//prompting the user to input
 int CustomerID;
 char CustomerName; //%s
 float UnitConsumed;
 double TotalBill;
 
  printf("Enter your CustomerID:");
  scanf("%d",&CustomerID);
  printf("Enter CustomerName:");
  scanf("%s",&CustomerName);
  printf("Enter the UnitConsumed:");
  scanf("%f",&UnitConsumed);
  
  //checking the given conditions
  double ChargesPerUnit;
  if(UnitConsumed < 199,ChargesPerUnit=1.20){
  printf("ChargesPerUnit is ksh %.2f\n",ChargesPerUnit);
  }
  else if(UnitConsumed<=400,ChargesPerUnit=1.50){
  printf("ChargesPerUnit is Ksh %.2f\n",ChargesPerUnit);
  }
  else if(UnitConsumed <=600,ChargesPerUnit=1.80){
  printf("ChargesPerUnit is Ksh %.2f\n",ChargesPerUnit);
  }
  else if(UnitConsumed > 601,ChargesPerUnit=2.00){
  printf("ChargesPerUnit is Ksh %2.f\n",ChargesPerUnit);
  }
  return 0;
 }
 //function definition
 int multiplication (float UnitConsumed ,double ChargesPerUnit){
 int result;
 result = UnitConsumed * ChargesPerUnit;
 printf("The TotalBill is %d \n",result);
 return result;
 }
 