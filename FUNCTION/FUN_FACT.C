#include<stdio.h>
#include<conio.h>
#include<dos.h>
void factriol(int num){
int fact;
for(fact=1;num>0;fact=fact*num,--num);
printf("\nFactriol %d!=%d",num,fact);
}
int Factriol(int num){
int fact1;
for(fact1=1;num>0;fact1=fact1*num,num--);
return(fact1);
}
void main(){
int num1,f;
a1:clrscr();
	printf("\nEnter number:");
	scanf("\n%d",&num1);
if(num1<0)
{
	printf("\ninvalied number found plz!enter agan:");
	delay(3000);
	goto a1;
	}
factriol(num1);
f=Factriol(num1);
	printf("\nfactriol %d!=%d",num1,f);
getch();
}