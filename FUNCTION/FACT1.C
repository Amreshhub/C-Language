#include<stdio.h>
#include<conio.h>
#include<dos.h>
int factriol(int num){
int fact;
for(fact=1;num>0;fact=fact*num,num--);
return(fact);
}
void main(){
int num1,fact1;
a1:clrscr();
printf("\nEnter any number:");
scanf("\n%d",&num1);
if(num1<0)
{
	printf("\nInvalied Entery Found !plz Enter agan:");
	delay(3000);
	goto a1;
	}
factriol(num1);
fact1=factriol(num1);
	printf("\nFActriol value %d!=%d",num1,fact1);
getch();
}