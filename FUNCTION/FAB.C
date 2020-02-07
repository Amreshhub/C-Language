#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int h=0,t=1,tram[100]={0},a=1,n[100],i=1;
a1:clrscr();
printf("\nEnter how many tram do you want to enter:");
scanf("\n%d",&n[i]);
if(n[i]<=0)
{
	printf("\nInvalied tram found plz Enter agan:");
	delay(2000);
	goto a1;
	}
while(a<=n[i])
{
	printf("%d ",tram[i]);
h=t;
t=tram[i];
tram[i]=h+t;
a++;
}
getch();
}