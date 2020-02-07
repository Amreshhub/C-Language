#include<stdio.h>
#include<conio.h>
void main()
{
int num[3],*pnum,a;
pnum=num;
clrscr();
for(a=0;a<3;a++)
{
printf("\nEnter no :%d",a+1);
scanf("\n%d",&pnum[a]);
}
printf("\nPerinting stored in array\n");
for(a=0;a<3;a++)
printf("\n%d",pnum[a]);
getch();
}