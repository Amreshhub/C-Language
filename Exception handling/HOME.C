#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],*s;
int i;
s=str;
clrscr();
printf("\nEnter a string:");
gets(s);
for(i=0;s[i]!='\0';i++);
printf("\nLength of the string:%s=%d",s,i);
getch();
}