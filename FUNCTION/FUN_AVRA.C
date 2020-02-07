#include<stdio.h>
#include<conio.h>
#include<dos.h>
void average(int a,int b){
int avg;
avg=(a+b)/2;
printf("\nAverage value of two number=%d",avg);
}
void main(){
int num1,num2,avg1;
clrscr();
printf("\nEnter any two number:");
scanf("\n%d%d",&num1,num2);
average(num1,num2);
getch();
}