#include<stdio.h>
#include<conio.h>
void _strcat(char *a,char *b){
int d,h;
for(d=0;a[d]!='\0';a++);
for(h=0;b[h]!='\0';a[h]=b[h],h++);
a[h]='\0';
}
void main(){
char str1[100],str2[100];
clrscr();
printf("\nEnter any two string::");
fflush(stdin);
gets(str1);
fflush(stdin);
gets(str2);
_strcat(str1,str2);
printf("\nConcanate string=%s",str1);
getch();
}