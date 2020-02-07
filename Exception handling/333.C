//program to convert decimal to hexadecimal number
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int hex[size],cnum,num,a,d;
s1:clrscr();
printf("Enter decimal number :");
scanf("\n%d",&num);
if(num<=0||num>size)
{
	printf("\nEnter	must be positive number:");
	delay(2000);
	goto s1;
	}
for(cnum=num,a=0;cnum>0;d=cnum%16,d=d>9?d+7:d,d=d+'0',hex[a++]=d,cnum=cnum/10);
printf(	"\nEquavalant hexadicamal no of decimal no%d=",num);
for(--a;a>=0;a--)
printf("%c",*(hex+a));
getch();
}
