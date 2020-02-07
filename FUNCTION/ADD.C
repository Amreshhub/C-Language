#include<stdio.h>
#include<conio.h>
void sum(int a,int b){
int c;
c=a+b;
printf("\nSum of two number=%d",c);
}
int Sum(int a,int b){
int d;
d=a+b;
return(d);
}
void main(){
int num1,num2,add;
clrscr();
printf("\nEnter any two number:");
scanf("\n%d%d",&num1,num2);
sum(num1,num2);
add=Sum(num1,num2);
printf("\nSum of two number=%d",add);
getch();
}