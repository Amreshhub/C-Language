#include<stdio.h>
#include<conio.h>
void main()
{
int num,d=2;
clrscr();
printf("\nEnter the number:");
scanf("\n%d",&num);
while(d<=num/2)
{
	if(num%d==0)
	d=num;
	d++;
	}
if(d>num)
	printf("\n%d is not prime number:",num);
else
	printf("\n%d is prime number:",num);
getch();
}