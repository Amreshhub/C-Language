#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int d=0;
clrscr();
printf("\nEnter the string:");
fflush(stdin);
gets(str);
for(d=0;*(str+d)!='\0';*(str+d)=*(str+d)>='a'&&*(str+d)<='z'?*(str+d)-32:*(str+d),d++);
printf("\nConvertead string=%s",str);
getch();
}