																																																																																																																																#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int num[size],*pnum,even=0,odd=0,a,n;
pnum=num;
z1:clrscr();
printf("\nEnter how many number do you want to enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
printf("\nYou Must enter positive value and number Enter between 1 To %d",size);
delay(3000);
goto z1;
}
for(a=0;a<n;a++)
{
	printf("\nEnter Number:%d:",a+1);
	scanf("\n%d",&pnum);
	if(*pnum<=0)
	{
		printf("\nMust Enter positive Integer value:");
		--a;
		continue;
		}
	if(*pnum%2==0)
		even++;
	else
		odd++;
		}
	printf("\nTotal count of Even=%d",even);
	printf("\nTotal count of odd=%d",odd);
	getch();
	}


