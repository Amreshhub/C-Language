#include<stdio.h>
#include<conio.h>
void high_list(int a,int b,int c,int d,int *high,int *list){
if(a>b)
	if(a>c)
		if(a>d)
			*high=a;
		else
			*highh=d;

	else
	if(c>d)
		*high=c;
		*list=d;
	else
		*high=d;
		*list=c;
else
if(b>c)
	if(b>d)
		*high=b;
		*list=d;
	else
		*high=d;
		*list=b;
else
if(c>d)
	*high=c;
	*list=d;
else
	*high=d;
	*list=c;
}
void main()[
int num1,num2,num3,num4,high,list;
clrscr();
printf("\nEnter any four number::");
scanf("\n%d%d%d%d",&num1,&num2,&num3,&num4);
high_list(num1,num2,num3,num4,&high,&list);
printf("\nHighest value=%d",high);
printf("\nSmollest value=%d",list);
getch();
}