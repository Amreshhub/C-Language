#include<stdio.h>
#include<conio.h>
#include<dos.h>
int sum(int a,int b){
int  add;
add=a+b;
return(add);
}
void Sum(int a,int b){
int add1;
add1=a+b;
printf("\nSum of two number=%d",add1);
}
int prod(int a,int b){
int mult;
mult=a*b;
return(mult);
}
void Prod(int a,int b){
int mult1;
mult1=a*b;
printf("\nProducet of two number=%d",mult1);
}
int avg(int a,int b){
int avgrage;
avgrage=(a+b)/2;
return(avgrage);
}
void Avg(int a,int b){
int avg1;
avg1=(a+b)/2;
printf("\nAverage value of two number=%d",avg1);
}
void main(){
int a,b,sum1,prod1,avg2;
s1:clrscr();
printf("\nEnter first number::");
scanf("\n%d",&a);
if(a<0){
printf("\nInvalead number found plz enter positive value:");
delay(2000);
goto s1;
}
s2:printf("\nEnter second number:");
scanf("\n%d",&b);
if(b<0){
printf("\nInvalid number found plz postive value enter:");
delay(3000);
goto s2;
}
Sum(a,b);
sum1=sum(a,b);
printf("\nSum of two number=%d",sum1);
Prod(a,b);
prod1=prod(a,b);
printf("\n Producet of two number=%d",prod1);
Avg(a,b);
avg2=avg(a,b);
printf("\nAverage value=%d",avg2);
getch();
}
