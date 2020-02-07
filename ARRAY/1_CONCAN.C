#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main(){
char str1[size],str2[size],a,b;
s1:clrscr();
printf("\nEnter 1st string:");
fflush(stdin);
gets(str1);
if(str[0]=='\0')
{
	printf("\nInvalied entery found Plz re Enter:");
	delay(2000);
	goto s1;
	}
s2:printf("\nEnter second String:");
fflush(stdin);
gets(str2);
if(str2[0]=='\0')
{
	printf("\nInvalied entery found plz ReEnter:");
	delay(3000);
	goto s2;
	}
for(a=0;str2[a]!='\0';a++){
for(b=0;str1[b]!='\0';str1[b]=str2[b],b++);
str1[a]='\0';
}
printf("\nConcanent string is=%s",str1);
getch();
}

