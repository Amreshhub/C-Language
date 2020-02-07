#include<stdio.h>
#include<conio.h>
#include<dos.h>
int _pow(int base ,int power){
int exp,p;
for(exp=p=1;p<=power;exp=exp*base,p++);
return(exp);
}
void main(){
int b,p,exp;
a1:clrscr();
printf("\nEnter value for base::");
scanf("\n%d",&b);
if(b<1){
	printf("\nMust enter positive base value :");
	delay(2000);
	goto a1;
	}
a2:printf("\nEnter power for base:");
scanf("\n%d",&p);
if(p<0)
{
	printf("\ninvalied power value plz enter positive value:");
	delay(3000);
	goto a2;
	}
exp=_pow(b,p);
printf("\nExporenatal value=%d",exp);
getch();
}