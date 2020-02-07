#include<stdio.h>
#include<conio.h>
void main()
{
int  num,a,sum=0.0,cnum;
clrscr();
printf("Enter a nummer:");
scanf("\n%d",&num);
cnum=num;
while(cnum)
{
	a=cnum%10;
	sum=sum+a*a*a;
	cnum=cnum/10;
	}
if(sum==num)
	printf("\n%d is an amstrong no:",num);
else
	printf("\n%d is not amstronig no:",num);
getch();
}
