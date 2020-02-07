#include<stdio.h>
#include<conio.h>
float average(float a,float b){
float avg;
avg=(a+b)/2.0;
return(avg);
}
void main(){
float num1,num2,avg1;
clrscr();
printf("\nEnter any two number::");
scanf("\n%f%f",&num1,&num2);
avg1=average(num1,num2);
printf("\nAverage value=%f",avg1);
getch();
}