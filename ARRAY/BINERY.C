#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int num,cnum,bin[size],i=0;
m1:clrscr();
printf("\nEnter a positive number:");
scanf("\n%d",&num);
if(num<=0)
{
printf("\nMust Enter a positive integer number;try agan!");
delay(5000);
goto m1;
}
for(cnum=num;cnum>0;bin[i++]=cnum%2,cnum=cnum/2);
printf("\n Equa valent binery no of ",num);
for(-i;i>=0;i--)
printf("%d",bin[i]);
getch();
}