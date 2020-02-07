#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
int num[size],even=0,odd=0,*even1,*odd1,n,a;
even1=&even;odd1=&odd;
a1:clrscr();
printf("\nHow many number do you want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nmust enter number between 1 To %d",size);
	delay(2000);
	goto a1;
	}
for(a=1;a<=n;a++)
{
printf("\nEnter number:%d::",a);
scanf("\n%d",&num[a]);
if(num[a]<=0)
{
printf("\nMust enter postive value:");
a--;
continue;
}
if(num[a]%2==0)
	(*even1)++;
else
	(*odd1)++;
}
printf("\ntotal count of even=%d total count of odd=%d",*even1,*odd1);
getch();
}