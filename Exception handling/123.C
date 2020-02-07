#include<stdio.h>
#include<conio.h.
#Include <dos.h.
#define size 200
void main()
{
int a,n,num[size],gr,lt,pgr,plt;
s1:clrscr();
printf("How many number you Want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
printf("\nMust Enter Positive Num and NUm Enter between1To%d",size);
delay(3000);
goto s1;
}
for(a=0;a<n;a++)
{
printf("\nEnter Number=%d",a+1);
scanf("\n%d",&num[a]);
if(*num[a]<=0)
{
printf("\nMust Enter Positive Value:");
a--;
cont