#include<stdio.h>
#include<conio.h>
void main()
{
int num,s=0,h=0,a,n;
clrscr();
printf("How many number do you want to Enter:");
scanf("\n%d",&n);
for(a=1;a<=n;a++)
{
	printf("\nEnter number %d:",a);
	scanf("\n%d",&num);
	if(a==1)
	h=s=num;
	if(num>h)
	h=num;
	if(num<h)
	s=num;
	}
printf("\nHighest value=%d",h);
printf("\nSmollest value=%d",s);
getch();
}