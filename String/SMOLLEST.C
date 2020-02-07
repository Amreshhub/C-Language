#include<stdio.h>
#include<conio.h>
void main()
{
int num,sml=0,a,n;
clrscr();
printf("Enter how many number do you to Enter:");
scanf("\n%d",&n);
for(a=1;a<=n;a++)
{
	printf("\nEnter number:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	sml=num;
	if(num<sml)
	sml=num;
	}
printf("\nSmollest Value=%d",sml);
getch();
}