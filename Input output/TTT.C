#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,num,pord;
clrscr();
printf("\nEnter Howhs tabal do you want:");
scanf("\n%d",&num);
while(a<=10)
{
	pord=num*a;
printf("\n%dx%d=%d",num,a,pord);
 a++;}
getch();
}
