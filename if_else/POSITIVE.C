//wap in 'c'lanuge to accept a number chack and display given number positive or negetive//
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int num;
a1:clrscr();
	printf("\nEnter any number:");
	scanf("\n%d",&num);

	{
		printf("\nMust enter numaric value:");
		delay(3000);
		goto a1;
		}
	if(num<=0)
		printf("\n%d is negitev number:",num);
	else
		printf("\n%d is positive number:",num);
	getch();
	}
