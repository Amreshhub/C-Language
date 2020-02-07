#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int pno[size],a,num,d=2,sum=0;
s1:clrscr();
printf("\nEnter a number:");
scanf("\n%d",&num);
if(num<=0||num<size)
{
	printf("\nMust Enter positive value:");
	delay(2000);
	goto s1;
	}
for(a=0;d<=num/2;d=d%num==0,pno[a++]=sum=sum+d );
if(sum==num)
printf("\n%d is perfacet number",num);
else
printf("\n%d is not perfacet number",num);
getch();
}