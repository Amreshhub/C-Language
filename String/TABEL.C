#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,por;
clrscr();
printf("Enter whoes tabal do you want:");
scanf("\n%d",&num);
for(a=1;a<=10;a++)
{
por=num*a;
printf("\n%dx%d=%d",num,a,por);
}
getch();
}