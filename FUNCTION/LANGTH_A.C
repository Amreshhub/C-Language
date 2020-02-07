#include<stdio.h>
#include<conio.h>
#include<dos.h>
int _strlen(char *pstr){
int i;
for(i=0;pstr[i]!='\0';i++);
return(i);
}
void main(){
char str1[100];
int lingth,i;
e1:clrscr();
printf("\nEnter a string:");
fflush(stdin);
gets(str1);
if(str1[0]=='\0'){
       printf("\nMust Enter astring plz try agan ");
	delay(3000);
	goto e1;
	}
lingth=_strlen(str1);
printf("\nLength of the given string=%d",lingth);
getch();
}