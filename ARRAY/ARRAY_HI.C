#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
int num[size],n,a,list,lp,high,hp;
a1:clrscr();
printf("\nHow many number do you want to enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nInvalied number found plz Enter agan:");
	delay(30000);
	goto a1;
	}
for(a=0;a<n;a++)
{
	printf("\nEnter number:%d::",a+1);
	scanf("\n%d",&num[a]);
	if(a==0)
	{
	high=list=num[a];
	hp=lp=a;
	}
	if(num[a]>high)
	{
	high=num[a];
	hp=a;
	}
	if(num[a]<list)
	{
	list=num[a];
	lp=a;
	}
	}
printf("\n Highest value=%d,position number=[%d]",high,hp);
printf("\n Smollest value=%d,position number=[%d]",list,lp);
getch();
}

