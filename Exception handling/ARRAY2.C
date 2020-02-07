#include<stdio.h>
#include<conio.h>
void main()
{
char ctr[50];
int a;
clrscr();
printf("\nEnter a String:");
gets(ctr);
for(a=0;*(ctr+a)!='\0';a++);
printf("\nLangteh of string%s=%d",ctr,a);
getch();
}