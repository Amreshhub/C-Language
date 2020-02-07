#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int pnum[size],i,f,b,num,cnum=0;
s1:clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
if(num<=0)
{
printf("\nMust Enter positive value:");
delay(500);
goto s1;
}
for(cnum=num,i=0;cnum>0;pnum[i++]=cnum%10,cnum=cnum/10);
for(f=0,b=i-1;pnum[f]==pnum[b]&&f<b;f++,b--);
if(f<3)
printf("%d is not palindrom",num);
else
printf("\n%d is palindrom number",num);
getch();
}