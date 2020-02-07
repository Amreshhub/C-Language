#include<stdio.h>
#include<conio.h>
void main()
{
int  tail=0,haid=1,tram=0,n,a=1;
clrscr();
printf("Enter how many you want to tram:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("%d ",tram);
	tail=haid;
	haid=tram;
	tram=haid+tail;
	a++;
	}
getch();
}
