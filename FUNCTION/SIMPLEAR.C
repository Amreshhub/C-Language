#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _smollest(char pstr[]){
int a;
for(a=0;pstr[a]!='\0';a++){
if(pstr[a]>='A'&&pstr[a]<='Z')
pstr[a]=pstr[a]+32;
}
}
void main(){
char str[100];
a1:clrscr();
printf("\nEnter capetal later:");
fflush(stdin);
gets(str);
if(str[0]=='\0'){
printf("\nMust Enter capital later between A to Z");
delay(2000);
goto a1;
}
_smollest(str);
	printf("\nCoveertaed smoll later is =%s",str);
getch();
}

