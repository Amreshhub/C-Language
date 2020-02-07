#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int highest(int n,int *pnum){

int high,a;
for(a=0;a<n;a++)
if(a==0)
high=*pnum;
else
if(*pnum>high)
high=*pnum;
return(high);
}
void main(){
int num[size],n,high,a;
a1:clrscr();
printf("\nHow many number o you want to Enter");
scanf("\n%d",&n);
if(n<0||n>size)
{
	printf("\nMust enter positive value:");
	delay(2000);
	goto a1;
	}
for(a=1;a<=n;a++)
{
	printf("\nEnter number:%d:",a);
	scanf("\n%d",num);
	}
high=highest(n,num);
printf("\nHighest number=%d",high);
getch();
}//close of main