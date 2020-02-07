#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,x,a=1,tram=1;
clrscr();
printf("\nEnter how many tram do you want to enter:");
scanf("\n%d",&n);
printf("\nEnter the value of base:");
scanf("\n%d",&x);
while(a<=n)
{
sum=sum+x;
tram=tram*x;
a++;
}
printf("\nValue of %dtram=%d",n,sum);
getch();
}