#include<stdio.h>
#include<conio.h>
int _strcmp(char *a,char *b){
int i,d;
for(i=0,d=a[i]-b[i];d==0&&a[i]!='\0';i++,d=a[i]-b[i]);
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
	printf("\nGiven string is not same");
getch();
}