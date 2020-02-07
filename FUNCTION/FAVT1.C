#include<stdio.h>
#include<conio.h>
#include<dos.h>
void factoril(int num){
int fact,cnum;
cnum=num;
for(fact=1;cnum>0;fact=fact*cnum,cnum--);
printf("\nFactoril valu %d!=%d",cnum,fact);
}
int Factriol(int  num){
int fact1;
for(fact1=1;num>0;fact1=fact1*num,num--);
return(fact1);
}
void main(){
int snum,fact2;
a1:clrscr();
printf("\nEnter a number:");
scanf("\n%d",snum);
if(snum<0)
{
	printf("\nMust Enter postive value:");
	delay(3000);
	goto a1;
	}
factoril(snum);
fact2=Factriol(snum);
printf("\nFactorial value%d!=%d",snum,fact2);
getch();
}
