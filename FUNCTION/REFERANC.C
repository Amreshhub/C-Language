#include<stdio.h>
#include<conio.h>
int sum(int *a,int *b){
int add;
add=*a+*b;
//printf("\nSum of two number=%d",add);
return(add);
}
void main(){
int num1,num2,add;
clrscr();
printf("\nEnter any two number:");
scanf("\n%d%d",&num1,&num2);
add=sum(&num1,&num2);
	printf("\nSum of two number=%d",add);
getch();
}