#include<stdio.h>
#include<conio.h>
void main()
{
char a[80],a1[80];
int i;
clrscr();
printf("\nEnter two string:");
fflush(stdin);
gets(a);
fflush(stdin);
gets(a1);
for(i=0;*(a+i)!='\0';a[i]=a1[i],i++);
*(a+i)='\0';
printf("\nCopy value into a or a1=%s ",a1);
getch();
}