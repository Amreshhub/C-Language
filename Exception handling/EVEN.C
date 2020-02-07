#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int num[size],even,odd,*even1,*odd1,n,a;
s1:clrscr();
printf("\nEnter how Many number do you want:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nInvalied Entery Found Plz Enter Number positive and Number Enter between 1 To %d",size);
	delay(3000);
	goto s1;
	}
for(a=0;a<0;a++)
{
	printf("\nEnter no:%d:",a+1);
	scanf("\n%d",(num+a));
	if(*(num+a)<=0)
	{
printf("\nEnter positive value onley:");
a--;
continue;
}
if(*(num+a)%2==0)
	(*even1)++;
else
	(*odd1)++;
}
printf("\nTotal count of Even=%d",*even1);
printf("\nTotal count of odd=%d",*odd1);
getch();
}




