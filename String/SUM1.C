#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,sum=0,d;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
for(a=1;num>0;a++)
{
d=num%10;
sum=sum+d;
num=num/10;
a++;
}
printf("\nSum of degite=%d",sum);
getch();
}