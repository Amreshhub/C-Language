#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char str1[100],str2[100],*pstr1,*pstr2;
int a;
s1:clrscr();
printf("\nEnter 1st String:");
fflush(stdin);
gets(pstr1);
if(*pstr1=='\0')
{
	printf("\nMust Enter String:");
	delay(3000);
	goto s1;
	}
s2:printf("\nEnter 2nd String:");
fflush(stdin);
gets(pstr2);
if(*pstr2=='\0')
{
	printf("\nMust Enter String:");
	goto s2;
	}
for(a=0;*(pstr2+a)!='\0';*(pstr1+a)=*(pstr2+a),a++);
*(pstr1+a)='\0';
printf("\nCoppyed String:=%s",pstr1);
getch();
}