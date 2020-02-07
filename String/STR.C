#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],str1[100];
int a,b;
a1:clrscr();
printf("\nEnter a String");
fflush(stdin);
gets(str);
printf("\nEnter saconed string:");
fflush(stdin);
gets(str1);
for(a=0;str[a]!='\0';a++)
for(b=0;str[b]!='\0';str1[b]=str[a],a++,b++);
printf("\nCoppyed String=%s",str,str1);
getch();
}
