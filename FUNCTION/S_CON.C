#include<stdio.h>
#include<conio.h>
int _strcan(char *a,char *b){
if(*a!='\0'){
*a=*b;
	_strcan(++a,++b);
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
_strcan(str1,str2);
printf("\nConcanate string=%s",str1);
getch();
}