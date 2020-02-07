#include<stdio.h>
#include<conio.h>
void main()
{
int x,p,y=1,a=1;
clrscr();
printf("Enter base value :");
scanf("\n%d",&x);
printf("\nEnter power if the gevin base:");
scanf("\n%d",&p);
while(a<=p)
{
	y=y*x;
	a++;
	}
printf("\n value of y=%d",y);
getch();
}
