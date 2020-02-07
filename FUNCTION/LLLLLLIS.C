#include<stdio.h>
#include<conio.h>
void high_list(int a,int b,int c,int d,int *high,int *list){
*high=a;
*list=a;
if(b>*high)
	*high=b;
if(c>*high)
	*high=c;
if(d>*high)
	*high=d;
if(b<*list)
	*list=b;
if(c<*list)
	*list=c;
if(d<*list)
	*list=d;
}
void main(){
int num1,num2,num3,num4,high,list;
clrscr();
printf("\nEnter any four number::");
scanf("\n%d%d%d%d",&num1,&num2,&num3,&num4);
high_list(num1,num2,num3,num4,&high,&list);
printf("\nHighest value=%d",high);
printf("\nSmollest value=%d",list);
getch();
}