#include<stdio.h>
#include<conio.h>
void main()
{
 char s[100];
 int a=0;
 clrscr();
 printf("\nEnter the string:");
 fflush(stdin);
 gets(s);
 for(a=0;*(s+a)!='\0';*(s+a)=*(s+a)>='A'&&*(s+a)<='Z'?*(s+a)+32:*(s+a),a++);
 printf("\nConverting value is=%s",s);
 getch();
 }