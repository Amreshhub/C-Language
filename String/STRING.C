#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y;
char ram1[100],ram2[100],*pram1,*pram2;
pram1=ram1;pram2=ram2;
s1:clrscr();
printf("\nEnter the String:");
fflush(stdin);
gets(pram1);
if(*pram1=='\0')
{
	printf("\nMust Enter String:");
	delay(3000);
	goto s1;
	}
s2:printf("\nEnter 2nd string:");
fflush(stdin);
gets(pram2);
if(*pram2=='\0')
{
	printf("\nMUst Enter 2nd String:");
	goto s2;
	}
for(x=0;*(pram1+x)!='\0';x++);
for(y=0;*(pram2+y)!='\0';*(pram1+x)=*(pram2+y),x++,y++);
*(pram1+x)='\0';
printf("\nCoodineat String=%s",ram1);
getch();
}

