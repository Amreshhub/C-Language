#include<stdio.h>
#include<conio.h>
void main()
{
int h=0,t=1,tram=0,n,a=1;
clrscr();
printf("\nHOw many tram do you want enter:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("%d ",tram);
	h=t;
	t=tram;
	tram=h+t;
	a++;
	}
getch();
}