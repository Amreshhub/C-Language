#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[100],rev[100];
int c,d;
d1:clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(a);
for(c=0;*(a+c)!='0';c++);
if(c==0)
{
	printf("\nEnter must string:");
	delay(2000);
	goto d1;
	}
for(--c,d=0;c>=0;rev[d]=a[c],d++,c++);
rev[d]='\0';
printf("\nReverse tsring=%s",rev);
getch();
}

