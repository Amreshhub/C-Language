#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int highest(int pnum[],int n){
int gr,a;
for(a=0;a<n;a++)
{
if(a==0)
gr=pnum[a];
else
if(pnum[a]>gr)
gr=pnum[a];
}
return(gr);
}
void main(){
int num[size],n,a,high;
s1:clrscr();
printf("\nHow many number do you want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nInvalied number found plz enter positive number::");
	delay(3000);
	goto s1;
	}
for(a=0;a<n;a++)
{
	printf("\nEnter number::%d::",a+1);
	scanf("\n%d",&num[a]);
	}
high=highest(num,n);
printf("\nHighest value in%dnumber=%d",n,high);
getch();
}