#include<stdio.h>
#include<conio.h>
void _strcat(char *a,char *b){
for(;*a!='\0';a++);
for(; *b!='\0';*a=*b,a++,b++);
*a='\0';
}
void main(){
char str1[100],str2[100];
clrscr();
printf("\nEnter any two string:");
fflush(stdin);
gets(str1);
fflush(stdin);
gets(str2);
_strcat(str1,str2);
	printf("\nConcatenate string=%s",str1);
getch();
}
