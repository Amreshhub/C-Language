#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char xyz[200];
int a=0;
w1:clrscr();
printf("\nEnter the string:");
fflush(xyz);
gets(xyz);
if(*(xyz+a)<65||*(xyz+a)<122)
{
	printf("\nMust Enter stringe value !invalied Stringe found Plz Try Agan:");
	delay(2000);
	goto w1;
for(a=0;xyz[a]!='\0';a++);
*(xyz+a)!='\0';
printf("\nLength of the %s=%d",xyz,a);
getch();
}