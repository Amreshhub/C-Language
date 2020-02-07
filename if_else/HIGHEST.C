//accept three number chack and display highest number//
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("\nEnter any three number:");
scanf("\n%d%d%d",&a,&b,&c);
if(a>b)
	if(a>c)
		printf("\nHighest number=%d",a);
	else
		printf("\nHiighest number=%d",b);
else
    if(b>c)
	printf("\nHighest number=%d",b);
    else
	printf("\nHighest number=%d",c);
getch();
}