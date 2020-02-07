#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,rev=0,num,b;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
while(num>0)
{
	b=num%10;
	sum=sum+b;
	rev=rev*10+b;
	num=num/10;
	}
printf("\nSum of degite=%d",sum);
printf("\nreverce orderis=%d",rev);
getch();
}