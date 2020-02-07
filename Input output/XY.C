#include<stdio.h>
#include<conio.h>
void main()
{
int y=1,x,p,a=1;
clrscr();
printf("Enter base value:");
scanf("\n%d",&x);
printf("\nEnter power valu:");
scanf("\n%d",&p);
while(a<=p);
{
	y=y*x;
	a++;
	}
printf("\nValue of y=%d",y);
getch();
}