#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,rev=0,cont=1,d,cnum=0;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
cnum=num;
while(cont>0)
{
	d=num%10;
	cont++;
	}
if(d==3)
{
while(cnum>0)
{
	d=cnum%10;
	sum=sum+d;
	rev=rev*10+d;
	cnum=cnum/10;
	}
	}
printf("\nsum of degite:%d",sum);
printf("\nreverce order=%d",rev);
getch();
}
