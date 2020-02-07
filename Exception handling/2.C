//program based on expeonation value
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int y=1,ctr=1,x,p;
a1:clrscr();
printf("Enter value for base:");
scanf("\n%d",&x);
if(x<=0)
{
	printf("\nMust Enter positive value:");
	delay(2000);
	goto a1;
	}
s1:clrscr();
printf("\nEnter power of x");
scanf("\n%d",&p);
if(p<=0)
{
	printf("\nMust Enter postive value !invalied Entery Found Plz Enter agin:");
	delay(2000);
	goto s1;
	}
for(;ctr<=p;y=y*x,ctr++);
printf("\nY=%d",y);
getch();
}