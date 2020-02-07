#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int highest(int *pnum,int n){
int a,gr;
for(a=0;a<n;*pnum++,a++)
{
if(a==0)
gr=*pnum;
else
if(*pnum>gr)
gr=*pnum;
}
return(gr);
}
void main()
{
int num[size],n,a,high;
s1:clrscr();
printf("\nHow many number do you want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nMust Enter number brtween 1To%d",size);
	delay(3000);
	goto s1;
	}
for(a=0;a<n;a++){
	printf("\nEnter number:%d:",a+1);
	scanf("\n%d",&num[a]);
}
high=highest(num,n);
printf("\nHighest valuein%d number=%d",n,high);
getch();
}