#include<stdio.h>
#include<conio.h>
int lingth(int *pstr){
int i;
for(i=0;*pstr!='\0';i++,*pstr++);
return(i);
}
void main(){
char str[100];
int count;
clrscr();
printf("\nEnter a string");
fflush(stdin);
gets(str);
count=lingth(str);
printf("\nLingth of given string=%d",count);
getch();
}