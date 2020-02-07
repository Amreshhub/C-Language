#include<stdio.h>
#include<conio.h>
int factriol(int num){
if(num==0)
return(1);
else
return(num*factriol(num-1));
}
void main(){
int snum,fact;
a1:clrscr();
printf("\nEnter a number:");
scanf("\n%d",&snum);
if(snum<0){
printf("\nInvalied entery plz enter positive valu:");
delay(2000);
goto a1;
}
fact=factriol(snum);
printf("\nFactriol value of %d number=%d",snum,fact);
getch();
}

