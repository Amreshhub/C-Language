#include<stdio.h>
#include<conio.h>
void main(){
int num=1,sum=0;
clrscr();
while(num<=100)
{
	if(num%2!=0)
	sum=sum+num;
	num++ ;
	}
	printf("\nSum of within 100 odd number =%d",sum);
	getch();
}
