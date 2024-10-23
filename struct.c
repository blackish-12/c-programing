//c structures
#include <stdio.h>
#include <string.h>
struct book{
 char title[30];
 char author[30];
 char ISBN[13];
 int publication_year;
 float price;
}book1;

int main(){
 //struct book1
 printf("Enter the book title:");
 scanf("%s",&book1.title);
 printf("Enter the Author:");
 scanf("%s",&book1.author);
 printf("Enter ISBN:");
 scanf("%s",&book1.ISBN);
 printf("Enter publication year:");
 scanf("%d",&book1.publication_year);
 printf("Enter the price:");
 scanf("%f",&book1.price);
 
 /*
 printf("title: %s \n",book1.title);
 printf("author: %s \n",book1.author);
 printf("publication_year:%d \n",book1.publication_year);
 printf("ISBN: %s \n",book1.ISBN);
 printf("price: %f \n",book1.price);
 */
 return 0;
}