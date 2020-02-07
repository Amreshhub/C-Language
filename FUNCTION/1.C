#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int highest(int *pnum,int n){
int high,a;
for(a=0;a<n;a++)
{
if(a==0)
high=pnum[a];
else
if(pnum[a]>high)
high=pnum[a];
}
return(high);
}
void main(){
int num[size],n,high,a;
a1:clrscr();
printf("\nEnter how many number do you to enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\ninvalied number found plz Enter number between 1 to %d ",size);
	delay(3000);
	goto a1;
	}
for(a=0;a<n;a++){

	printf("\nEnter number :%d:",a+1);
	scanf("\n%d",&num[a]);
}
high=highest(num,n);
printf("\nHighest value%dnos=%d",n,high);
getch();
}
