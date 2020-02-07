#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void highest (int a,int b,int c,){
int h;
if(a>b)
	if(a>c)
		printf("\nHighest value=%d",a);
	else
		printf("\nHighest value=%d",c);
else
if(b>c)
	printf("\nHighest value=%d",b);
else
	printf("\nHighest value=%d",c);
}
viod main(){
int a,b,c;
clrscr();
printf("\nEnter any three number:");
scanf("\n%d%d%d",&a,&b,&c);
highest(a,b,c);
getch();
}

