#include<stdio.h>
#include<conio.h>
void sum(float a,float b){
float c;
c=a+b;
printf("\nSum of two num=%f",c);
}
void main(){
float num1,num2;
clrscr();
printf("\nEnter number :");
scanf("\n%f%f",&num1,&num2);
sum(num1,num2);
getch();
}