//accept four number chack and display highest value//
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
printf("\nEnter any four number:");
scanf("\n%d%d%d%d",&a,&b,&c,&d);
if(a>b)
	if(a>c)
		if(a>d)
			printf("\nHighest number is=%d",a);
		else
			printf("\nHighest number is=%d",d);
	else
	if(c>d)
		printf("\nHighest number is=%d",c);
	else
		printf("\nHighest number is=%d",d);
else
if(b>c)
	if(b>d)
		printf("\nHighest number is=%d",b);
	else
		printf("\nHighest number is =%d",d);
else
if(c>d)
	printf("\nHighest number is=%d",c);
else
	printf("\nHighest number is=%d",d);
getch();
}
