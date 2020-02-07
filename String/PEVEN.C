#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int num[100],*pnum,even=0,odd=0,*peven,*podd,a,n;
pnum=num;
peven=&even;
podd=&odd;
a1:clrscr();
printf("\nEnter How Many Number do you want to enter:");
scanf("\n%d",&n);
if(n<=0)
{
	printf("\nMust Enter positive value:");
	delay(3000);
	goto a1;
	}
for(a=0;a<=n;a++)
{
	printf("\nEnter number :%d:",a+1);
	scanf("\n%d",&pnum);
	if(*pnum<=0)
	{
		printf("\nMust Enter positive value only:");
		--a;
		continue;
		}
		}
	if(*(pnum+a)%2==0)
	(*peven)++;
	else
	(*podd)++;
printf("\nTotal count of even=%d",*peven);
printf("\nTotal count of odd=%d",*podd);
getch();
}
