#include<stdio.h>
#include<conio.h>
void main()
{
int num,fat=1,cnum;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
cnum=num;
while(cnum>0)
{
fat=fat*cnum;
cnum--;
}
printf("\n%dfactriol=%d",num ,fat);
getch();
}