#include<stdio.h>
#include<conio.h>
#include<dos.h>
void _strcpy(char *x,char *y){
int a;
for(a=0;y[a]!='\0';x[a]=y[a],a++);
x[a]='\0';
}
void main(){
char str1[100],str2[100]	;
clrscr();
printf("\nEnter any two string:");
fflush(stdin);
gets(str1);
fflush(stdin);
gets(str2);
_strcpy(str1,str2);
printf("\nCoppyed string=%s",str1);
getch();
}