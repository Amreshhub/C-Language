#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
int dnum[size],i,j,d,sum=0;
long int num,cnum;
e1:clrscr();
printf("\nEnter a number:");
scanf("\n%d",&num);
if(num<=0)
{
printf("\nMust Enter positive integer number:");
delay(2000);
goto e1;
}
for(cnum=num,i=0;cnum>0;d=cnum%10,sum=sum+d,dnum[i++]=d,cnum=cnum/10);
clrscr();
for(j=0;j<i;j++)
{
printf("%d" ,*(dnum+j));
}
printf("\nSum of degite=%d",sum);
getch();
}