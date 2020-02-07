#include<stdio.h>
#include<conio.h>
#include<dos.h>
int factriol(int num){
int fact;
for(fact=1;num>0;fact=fact*num,num--);
return(fact);
}
void main(){
int num1,f;
a1:clrscr();
printf("\nEnter a number::");
scanf("\n%d",&num1);
if(num1<0)
{
	printf("\nInvalied number found plz Enter postive value:");
	delay(2000);
	goto a1;
	}
f=factriol(num1);
	printf("\nFactriol %d!=%d",num1,f);
getch();
}