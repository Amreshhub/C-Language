//accept two number chack and disply smollest value//
#include<stdio.h>
#include<conio.h>
void main(){
int c,d;
clrscr();
printf("\nEnter any two number:");
scanf("\n%d%d",&c,&d);
if(c<=d)
	printf("\nSmollest value=%d",c);
else
	printf("\nSmollest value=%d",d);
getch();
}