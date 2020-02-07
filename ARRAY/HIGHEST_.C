#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
int num[size],g,l,pg,pl,a																																																																				,n;
s1:clrscr();
printf("\nHow Many number do want to enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nMust Enter number between 1 To %d",size);
	delay(3000);
	goto s1;
	}
for(a=0;a<n;a++)
{
       printf("\nEnter number %d::",a+1);
	scanf("\n%d",&num[a]);
	if(num[a]<=0)
	{
		printf("\nMust enter positive value");
		a--;
		continue;
		}
if(a==0)
{
g=l=num[a];
pg=pl=a;
}
if(num[a]>g)
{
g=*(num+a);
pg=a;
}
if(num[a]<l)
{
l=*(num+a);
pl=a;
}
}//close of for
clrscr();
printf("\nHighest value=%d,found at[%d]",g,pg);
printf("\nSmollest value=%d,foud at[%d]",l,pl);
getch();
}

