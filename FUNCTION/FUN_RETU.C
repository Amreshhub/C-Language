#include<stdio.h>
#include<conio.h>
int listvalue(int a,int b){
if(a<b)
	printf("\nSmollest value=%d",a);
else
	printf("\nSmollest value=%d",b);
if(a<b)
	return(a);
else
	return(b);
}
void main(){
int num1,num2,list;
clrscr();
printf("\nEnter any two number::");
scanf("\n%d%d",&num1,&num2);
listvalue(num1,num2);
list=listvalue(num1,num2);
	printf("\nSmollest value=%d",list);
getch();
}