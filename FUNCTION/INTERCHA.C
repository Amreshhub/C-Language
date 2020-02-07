#include<stdio.h>
#include<conio.h>
int interchange(int *a,int *b){
int change;
change=*a;
*a=*b;
*b=change;
return(change);
}
void main(){
int num1,num2;
clrscr();
printf("\nEnter any two number:");
scanf("\n%d%d",&num1,&num2);
printf("\nBefore changing number a=%d,b=%d",num1,num2);
interchange(&num1,&num2);
	printf("\nAfter interchang value a=%d,b=%d",num1,num2);
getch();
}