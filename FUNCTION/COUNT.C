#include<stdio.h>
#include<conio.h>
int lingth(char *pstr){
int a;
for(a=0;*pstr!='\0';a++,*pstr++)
return(a);
}
void main(){
char str[100];
int len;
s1:printf("\nEnter a string:");
fflush(stdin);
gets(str);
if(str[0]=='\0')
{
printf("\nMust enter a string:");
delay(2000);
goto s1;
}
len=lingth(str);
printf("\nCount of string=%d",len);
getch();
}