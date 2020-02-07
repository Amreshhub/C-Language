#include<stdio.h>
#include<conio.h>
int _upper(char *p){
if(*p!='\0'){
if(*p>='a'&&*p<='z')
*p=*p-32;
_upper(++p);
}
}
void main(){
char str[100];
clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(str);
_upper(str);
printf("\nconverated string in upper case=%s",str);
getch();
}