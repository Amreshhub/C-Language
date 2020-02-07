#include<stdio.h>
#include<conio.h>
#include<dos.h>
void numraic(float a,float b,float *sum,float *prod,float *avg){
*sum=a+b;
*prod=a*b;
*avg=(a+b)/2.0;
}
void main(){
float num1,num2,add,proud,ave;
a1:clrscr();
printf("\nEnter 1st number:");
scanf("\n%f",&num1);
if(num1<1)
{
	printf("\nMust enter positive value:");
	delay(2000);
	goto a1;
	}
a2:printf("\nEnter 2nd number::");
scanf("\n%f",&num2);
if(num2<1)
{
	printf("\ninvalied entery plz Enter positive value:");
	delay(2000);
	goto a2;
	}
numraic(num1,num2,&add,&proud,&ave);
printf("\nSum of two number=%f",add);
printf("\nProducet of two number=%f",proud);
printf("\nAverage of two number=%f",ave);
getch();
}