#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
float num[size];
int n,i;
s1:clrscr();
printf("\nHow many number do you want:");
scanf("\n%d",&n);
if(n<=0||n>size){
printf("\nMust enter choise of no between 100 to %d",size);
delay(2000);
goto s1;
}
for(i=0;i<n;i++){
printf("\nEnter number:%d",i+1);
scanf("\n%f",(num+i));
clrscr();
printf("\nPriting value keyd in\n");
for(i=0;i<n;i++);
printf("%f ",*(num+i));
getch();
}