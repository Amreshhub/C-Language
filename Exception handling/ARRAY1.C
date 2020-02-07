#include<stdio.h>
#include<conio.h>
void main()
{
char amr[100];
int i;
clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(amr);
//display by string
//printf("\nprinting string:%s",amr);
//display charcter by charcter
for(i=0;amr[i]!='\0';i++);
printf("%c",*(amr+i));
getch();
}