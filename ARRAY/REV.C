#include<stdio.h>
#include<conio.h>
void main(){
int rev=0,a,num;
clrscr();
printf("\nEnter any number:-");
scanf("\n%d",&num);
while(num>0)
{
	a=num%10;
	rev=rev*10+a;
	num=num/10;
	}
printf("\nReverse order is=%d",rev);
getch();
}//close of main