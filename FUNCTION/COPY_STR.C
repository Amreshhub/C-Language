#include<stdio.h>
#include<conio.h>
int _strcpy(char *a,char *b){
if(*b!='\0'){
  *a=*b;
	_strcpy(++a,++b);
	}
else
	*a='\0';
	}
void main(){
char str1[100],str2[100];
clrscr();
printf("\nEnter first string:");
fflush(stdin);
gets(str1);
printf("\nEnter second string:");
fflush(stdin);
gets(str2);
_strcpy(str1,str2);
printf("\nCopyed string=%s",str1);
getch();
}