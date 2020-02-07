#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _upper(char *pstr){
int a;
for(a=0;pstr[a]!='\0';a++){
if(pstr[a]>='a'&&pstr[a]<='z')
pstr[a]=pstr[a]-32;
}
}
void main(){
char str1[100];
a1:clrscr();
printf("\nEnter a Later:");
fflush(stdin);
gets(str1);
if(str1[0]=='\0')
{
printf("\nInvalied later found plz enter smoll later");
delay(2000);
goto a1;
}
_upper(str1);
	printf("\nConvarted smoll later is =%s",str1);
getch();
}

