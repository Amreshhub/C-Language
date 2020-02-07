#include<stdio.h>
#include<conio.h>
void main()
{
int num,d=1,sum=0;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
while(d<=num/2)
{
	if(num%d==0)
	sum=sum+d;
	d++;
	}
if(sum==num)
	printf("\n%d is perfacet num:",num);
else
	printf("\n%d is not perfacet num:",num);
getch();
}
