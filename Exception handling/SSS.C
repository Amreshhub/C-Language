#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
float num[size],sum=0.0,avg=0.0;
int a,n;
s1:clrscr();
printf("\nHOw many time NUM do you want to enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
printf("\nMust Enter positive and number to be Enter between 1To %d",size);
delay(2000);
goto s1;
}
for(a=0;a<n;a++)
{
	printf("\nEnter number:%d",a+1);
	scanf("\n%f",(num+a));
sum=sum+*(num+a);
}
avg=sum/n;
printf("\nSum of %d nos=%f",n,sum);
printf("\nAvrage value=%f",avg);
getch();
}