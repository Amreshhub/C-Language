#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,a,d;
clrscr();
printf("Enter the number:");
scanf("\n%d",&num);
for(a=1;num>0;a++)
{
	d=num%10;
	rev=rev*10+d;
	num=num/10;
	}
printf("\nReverse order=%d",rev);
getch();
}