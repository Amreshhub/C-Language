#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int num[size],h,s,hp,sp,*h1,*s1,*hp1,*sp1,n,a;
h1=&h;s1=&s;hp1=&hp;
a1:clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nMust Enter positive value and enter must 1TO %d",size);
	delay(2000);
	goto a1;
	}
for(a=0;a<n;a++)
{
	printf("\nEnter number :%d:",a+1);
	scanf("\n%d",*(num+a));
	if(*(num+a)<=0)
	{
	printf("\nMust Enter positive value Plz Enter again:");
	a--;
	continue;
	}
if(a==0)
*h1=*s1=*(num+a);
*hp1=*sp1=a;
if(*(num+a)>*h1)
*h1=*(num+a);
*hp1=a;
if(*(num+a)<*s1)
*s1=*(num+a);
*sp1=a;

}
printf("\nHighest value=%d position=%d",*h1,*hp1);
printf("\nSmollest value=%d Position=%d",*s1,*sp1);
getch();
}

