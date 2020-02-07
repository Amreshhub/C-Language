#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _smoll(char *pstr){
for(;pstr!='\0';pstr++){
if(*pstr>='A'&&*pstr<='Z')
*pstr=*pstr+32;
}
}
void main(){
char str[100];
a1:clrscr();
printf("\nEnter Capital later:");
fflush(stdin);
gets(str);
if(str[0]=='\0')
{
	printf("\nInvalied later found plz enter capital later enter between ATo Z:");
	delay(2000);
	goto a1;
	}
_smoll(str);
	printf("\nConvarted  smoll later is=%s",str);
getch();
}