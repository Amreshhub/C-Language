#include<stdio.h>
#include<conio.h>
void sum(int a,int b){
int add;
add=a+b;
	printf("\nSum of two number=%d",add);
}
int Sum(int a,int b){
int add1;
add1=a+b;
return(add1);
}
void prod(int a, int b){
int milt;
milt=a*b;
	printf("\nProducet of two number=%d",milt);
}
int Prod(int a,int b){
int milt1;
milt1=a*b;
return(milt1);
}
void average(int a,int b){
int avg;
avg=(a+b)/2;
	printf("\nAverage value of two number=%d",avg);
}
int Average(int a,int b){
int avg1;
avg1=(a+b)/2;
return(avg1);
}
void main(){
int num1,num2,a,b,c;
s1:clrscr();
printf("'\nEnter any two number:");
scanf("\n%d%d",&num1,&num2);
sum(num1,num2);
a=Sum(num1,num2);
	printf("\nSum of two number=%d",a);
prod(num1,num2);
b=Prod(num1,num2);
	printf("\nProduct of two number=%d",b);
average(num1,num2);
c=Average(num1,num2);
	printf("\nAverage value=%d",c);
getch();
}
