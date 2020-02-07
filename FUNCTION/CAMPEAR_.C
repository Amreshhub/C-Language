#include<stdio.h>
#include<conio.h>
int _strcmp(char *a,char *b){
int d;
for(d=*a-*b;d==0&&*a!='\0';a++,b++,d=*a-*b);
return(d);
}
void main(){
char str1[100],str2[100];
clrscr();
printf("\nEnter any two string:");
fflush(stdin);
gets(str1);
fflush(stdin);
gets(str2);
if(_strcmp(str1,str2)==0)
	printf("\nGiven String is same");
else
	printf("\nGiven String is not same");
getch();
}
