#include<stdio.h>
#include<conio.h>
void _strcpy(char m[],char n[]){
int a;
for(a=0;n[a]!='\0';m[a]=n[a],a++);
m[a]='\0';
}
void main(){
char str1[100],str2[100];
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