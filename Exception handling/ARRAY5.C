#include<stdio.h>
#include<conio.h>
void main()
{
char a[90];
int i;
w1: clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(a);
for(i=0;*(a+i)!='\0';i++);
if(i==0)
{
	printf("\nMust Enter string:");
	delay(3000);
	goto w1;
	}
for(--i;i>=0;i--)
printf("%c",a[i]);
getch();
}

