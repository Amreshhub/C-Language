#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,num,d,cnum;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
cnum=num;
while(cnum>0)
{
	d=cnum%10;
	rev=rev*10+d;
	cnum=cnum/10;
	}
if(rev==num)
	printf("\n%d is palindrom number:",num);
else
	printf("\n%d is not palindrom number:",num);
getch();
}