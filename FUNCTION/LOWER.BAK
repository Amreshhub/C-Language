#include<stdio.h>
#include<conio.h>
int _lower(char *a){
if(*a!='\0') {
if(*a>='A'&&*a<='Z')
*a=*a+32;
_lower(++a);
}
}
void main(){
char str[100];
clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(str);
_lower(str);
printf("\nConvarted string lower case=%s",str);
getch();
}