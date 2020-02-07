#include<stdio.h>
#include<conio.h>
int higest(int a,int b){
if(a>b)
	printf("\nHighest value is=%d",a);
else
	printf("\nHighest value is=%d",b);
if(a>b)
	return(a);
else
	return(b);
}
void main(){
int num1,num2,high;
clrscr();
printf("\nEnter any two number::");
scanf("\n%d%d",&num1,&num2);
higest(num1,num2);
high=(num1,num2);
	printf("\nHighest value=%d",high);
getch();
}