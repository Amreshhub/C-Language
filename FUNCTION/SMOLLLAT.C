#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _upper(char *pstr){
int a;
for(a=0;pstr[a]!='\0';a++){
if(pstr[a]>='A'&&pstr[a]<='Z')
pstr[a]=pstr[a]+32;
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
	printf("\nMust Enter chacrater between Smoll a To z only;");
	delay(3000);
	goto a1;
	}
_upper(str);
	printf("\nConveted smoll charcter is=%s",str);
getch();
}