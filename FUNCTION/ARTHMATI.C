#include<stdio.h>
#include<conio.h>
#include<dos.h>
int _strlen(char *pstr){
int a;
for(a=0;*pstr!='\0';pstr++,a++);
return(a);
}
void main(){
char str1[100];
int a,length;
a1:clrscr();
printf("\nEnter a String:");
fflush(stdin);
gets(str1);
if(str1[0]=='\0')
{
	printf("\nMust Enter String:");
	delay(2000);
	goto a1;
	}
length=_strlen(str1);
	printf("\nLeangth of given String=%d",length);
getch();
}