//c arrays -1D arrays
#include <stdio.h>
#include <math.h>
int sum(int i);
int main() {
    int i;
    int marks[5]={50,60,70,80,2};
	i = sum(marks);
    for(i=0;i<5;i++){
printf("marks[%d]=%d\n",i,marks[i]);
}
return 0;
}
//function definition
int sum(int i){
	int result;
	result=50+60+70+80+2;
	return result;
}