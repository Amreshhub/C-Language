#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int n,ctr=1,tail=0,haid=1,ntram=0;
s1:clrscr();
printf("\nEnter how many tram do you want:");
scanf("\n%d",&n);
if(n<=0)
{
	printf("\nMust Enter positive Value:");
	delay(3000);
	goto s1;
	}
while(ctr<=n)
{
	printf("%d  ",ntram);
	tail=haid;
	haid=ntram;
	ntram=haid+tail;
	ctr++;
	}
getch();
}
