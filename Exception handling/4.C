#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int tram=1,sum=0,n,i=1,x;
s1:clrscr();
printf("\nEnter how many tram do you want to Enter:");
scanf("\n%d",&n);
if(n<=0)
{
	printf("\nEnter must positive value:");
	delay(3000);
	goto s1;
	}
d1:clrscr();
printf("\nEnter Base value of the series:");
scanf("\n%d",&x);
if(x<=0)
{
	printf("\nMust Enter positeve  value Plz Enter agan:");
	delay(3000);
	goto d1;
	}
while(i<=n)
{
sum=sum+tram;
i++;
tram=tram*x;
}
printf("\nSum of %d Tram=%d",n,sum);
getch();
}