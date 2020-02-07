#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _strcpy(char *p,char *s){
for(;*s!='\0';*p=*s,p++,s++);
*p='\0';
}
void main(){
char str1[100],str2[100];
a1:clrscr();
printf("\nEnter two string::");
fflush(stdin);
gets(str1);
fflush(stdin);
gets(str2);
_strcpy(str1,str2);
	printf("\nCpoppyed string=%s																																				"	,str1);
getch();
}
