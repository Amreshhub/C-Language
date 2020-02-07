#include<stdio.h>
#include<conio.h>
#include<dos.h>
void fabo(int n){
int n tram=1,h=0,t=1,a=1;
while(a>0)
{
	printf("%d ",tram);
	h=t;
	t=tram;
	tram=h+t;
	a++;
	}
int Fabo(int n){
int n,tram=1,h=0,t=1,a=1;
while(a>0)
{
printf("%d ",tram);
 h=t;
 t=tram;
 tram=a+b;
 a++;
 return(tram);
 }
void main(){
int n,f;
a1:clrscr();
printf("\nHow many tram you want to enter:");
scanf("\n%d",&n);
if(n<0)
{
	printf("\nMust Enter postive value:");
	delay(3000);
	goto a1;
	}
fabo(n);
f=Fabo(n);
printf("%d ",f);
getch();
}
