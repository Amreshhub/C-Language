																																																					#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _upper(char pstr[]){
int a;
for(a=0;pstr[a]!='\0';a++){
if(pstr[a]>='a'&&pstr[a]<='z')
pstr[a]=pstr[a]-32;
}
}
void main(){
char str1[100];
a1:clrscr();
printf("\nEnter a smoll later:");
fflush(stdin);
gets(str1);
if(str1[0]=='\0')
{
	printf("\nInvalied entery found Plz enter later between a to z:");
	delay(2000);
	goto a1;
	}
_upper(str1);
	printf("\nConvarted capital string is=%s",str1);
getch();
}