#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int smollest(int pnum[],int n){
int d,list;
for(d=0;d<n;d++){
if(d==0)
list=pnum[d];
else
if(pnum[d]<list)
list=pnum[d];
}
return(list);
}
void main(){
int num[size],n,d,list;
f1:clrscr();
printf("\nHow Many number do you want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nInvalied number found Plz enter number between 1 to %d",size);
	delay(2000);
	goto f1;
	}
for(d=0;d<n;d++)
{
	printf("\nEnter  number::%d::",d+1);
	scanf("\n%d",&num[d]);
	}
list=smollest(num,n);
	printf("\nSmollest value%dnumber=%d",n,list);
getch();
}