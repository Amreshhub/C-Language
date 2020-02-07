#include<stdio.h>
#include<conio.h>
void main()
{
long int num,rev=0.0,b;
clrscr();
printf("Enter a number:");
scanf("\n%ld",&num);
while(num)
{
	b=num%10;
	rev=rev*10+b;
	num=num/10;
	}
printf("\nReverse order is %ld",rev);
getch();
}
