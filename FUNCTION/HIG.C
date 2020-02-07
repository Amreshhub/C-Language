#include<stdio.h>
#include<conio.h>
#include<dos.h>
int high(int *pstr,int n){
int r;
if(r==0)
high=*pstr;
if(high>*pstr)
high=*pstr;
return(*pstr);
}
void main(){
int n,num,a;
a1:clrscr();
printf("\nEnter how many number do you to enter:");
scanf("\n%d",&n);
if(n<=0)
{
printf("\nInvalied entery found plz Enter agan:");
delay(2000);
goto a1;
}
for(a=0;a<n;a++)
{
printf("\nEnter number %d",a+1);
scanf("\n%d",&num);
}
h=high(num,n);
printf("\nHighest number=%d",h);
getch();
}
