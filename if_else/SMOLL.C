//wap in 'c' lanuage to accept three number chack and display smollest value//
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\nEnter any three number:");
scanf("\n%d%d%d",&a,&b,&c);
if(a<b)
	if(a<c)
		printf("\nSmollest value=%d",a);
	else
		printf("\nSmollest value=%d",b);
else
if(b<c)
	printf("\nSmollest number=%d",b);
else
	printf("\nSmollest number=%d",c);
getch();
}