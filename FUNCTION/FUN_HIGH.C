#include<stdio.h>
#include<conio.h>
void highest(int a,int b,int c,int *high){
if(a>b)
	if(a>c)
		*high=a;
	else
		*high=c;
else
if(b>c)
	*high=b;
else
	*high=c;
}
void main(){
int num1,num2,num3,high;
clrscr();
printf("\nEnter any three number:");
scanf("\n%d%d%d",&num1,&num2,&num3);
highest(num1,num2,num3,&high);
printf("\nHighest value=%d",high);
getch();
}