#include<stdio.h>
#include<conio.h>
void avg(float a,float b){
float c;
c=(a+b)/2.0;
printf("\nAverage value of two number=%f",c);
}
float Avg(float a,float b){
float d;
d=(a+b)/2.0;
return(d);
}
void main(){
float num1,num2,s;
clrscr();
printf("\nEnter any tow number:");
scanf("\n%f	%f",&num1,&num2);
avg(num1,num2);
s=Avg(num1,num2);
printf("\nAverage value of two number=%f",s);
getch();
}