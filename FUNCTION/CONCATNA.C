#include<stdio.h>
#include<conio.h>
void _strcat(char a[],char b[]){
int c,d;
for(c=0;a[c]!='\0';a++);
for(d=0;b[d]!='\0';a[d]=b[d],d++);
a[d]='\0';
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
printf("\nConcatnate string =%s",str1);
getch();
}