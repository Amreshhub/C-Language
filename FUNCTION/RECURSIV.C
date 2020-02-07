#include<stdio.h>
#include<conio.h>
int _strlen(char *p){
if(*p=='\0')
	return(0);
else
	return(1+_strlen(p++));
	}
void main(){
char str1[100];
int len;
clrscr();
printf("\nEnter a String:");
fflush(stdin);
gets(str1);
len=_strlen(str1);
printf("\nLingth of the given string %s=%d",str1,len);
getch();
}