#include<stdio.h>
#include<conio.h>
int _strcmp(char *p,char*s){
if(*p-*s==0&&*p!='\0')
	return(_strcmp(++p,++s));
else
	return(*p-*s);
	}
void main(){
char str1[100],str2[100];
clrscr();
printf("\nEnter first string::");
fflush(stdin);
gets(str1);
printf("\nEnter second string:");
fflush(stdin);
gets(str2);
if(_strcmp(str1,str2)==0)
	printf("\nString are same");
else
	printf("\nString are not same");
getch();
}
