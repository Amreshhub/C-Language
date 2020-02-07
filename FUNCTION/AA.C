#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int num[size],even,odd,*even1,*odd1;
int n,a;
even1=&even;odd1=&odd;
a1:clrscr();
printf("\nHow many number do you want to enter:");
scanf("\n%d",&n);
if(n<=0||n>size){
	printf("\nMust enter choice of number between 1To %d",size);
	delay(2000);
	goto a1;
	}
for(a=0;a<n;a++){
printf("\nEnter number%d"a+1);
scanf("\n%d",&num[a]);
if(