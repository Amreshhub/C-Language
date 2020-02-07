#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int amr[size],n,a,even=0,odd=0,*even1,*odd1;
even1=&even,odd1=&odd;
s1:clrscr();
printf("\nHow many number do you want to Enter:?");
scanf("\n%d",&n);
if(n<=0||n>size)
{
printf("\nMust Enter positive value and number to be Enter 1To %d",size);
delay(2000);
goto s1;
}
for(a=0;a<n;a++)
{
printf("\nEnter number %d",a+1);
scanf("\n%d",(amr+a));
}
if(amr[a]%2==0)
*even1++;
else
*odd1++;
	printf("\nTotal count of even:%d and total count of odd%d",*even1,*odd1);
getch();
}
