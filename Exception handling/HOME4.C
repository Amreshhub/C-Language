#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
float num[size];
int n,i;
a1:clrscr();
printf("\nHow many no do you want to Enter?");
scanf("\n%d",&n);
if(n<=0||n>size)
{
printf("\nMust Enter positive value");
delay(2000);
goto a1;
}
for(i=0;i<n;i++)
{
printf("\nEnter number:%d",i+1);
scanf("\n%f",(num+i));
}
clrscr();
printf("\n Printing value keyed in \n");
for(i=0;i<n;i++)
printf("%f ",*(num+i));
getch();
}