	#include<stdio.h>
#include<conio.h>
void high_list(int hig1,int hig2,int hig3,int hig4, int list1,int list2,int list3,int list4,int *a,int *b,int *c,int *d){
if(*a>*b)
	if(*a>*c)
		if(*a>*d)
			hig1=*a;
		else
			hig4=*d;
	else
	if(*c>*d)
		hig3=*c;
	else
		hig4=*d;
else
if(*b>*c)
	if(*b>*d)
		hig2=*b;
	else
		hig4=*d;
else
if(*c>*d)
	hig3=*c;
else
	hig4=*d;
if(*a<*b)
	if(*a<*c)
		if(*a<*d)
			list1=*a;
		else
			list4=*d;
	else
	if(*c<*d)
		list3=*c;
	else
		list4=*d;
else
if(*b<*c)
	if(*b<*d)
		list2=*b;
	else
		list4=*d;
else
if(*c<*d)
	list3=*c;
else
	list4=*d;
}
void main(){
int num1,num2,num3,num4,hig1,hig2,hig3,list1,list2,list3,list4;
clrscr();
printf("\nEnter Four any number:");
scanf("\n%d%d%d%d",&num1,&num2,&num3,&num4);
high_list(num1,num2,num3,num4,&hig1,&hig2,&hig3,&hig4,&list1,&list2,&list3,&list4);
if(num1>num2)
	if(num1>num3)
		if(num1>num4)
			printf("\nHighest value=%d",hig1);
		else
			printf("\nHIghest value=%d",hig4);
	else
	 if(num3>num4)
		printf("\nHighest value=%d",hig3);
	 else
		printf("\nHighest value=%d",hig4);
else
if(num2>num3)
	if(num2>num4)
		printf("\nHighest value=%d",hig2);
	else
		printf("\nHighest value=%d",hig4);
else
if(num3>num4)
	printf("\nHighest value=%d",hig3);
else
	printf("\nHighest value=%d",hig4);
if(num1<num2)
	if(num1<num3)
		if(num1<num4)
			printf("\nSmollest value=%d",num1);
		else
			printf("\nSmollest value=%d",num4);
	else
	if(num3<num4)
		printf("\nSmollest value=%d",num3);
	else
		printf("\nSmollest value=%d",num4);
else
if(num2<num3)
	if(num2<num4)
		printf("\nSmollest value=%d",num2);
	else
		printf("\nSmollest value=%d",num4);
else
if(num3<num4)
	printf("\nSmollest value=%d",num3);
else
	printf("\nSmollest value=%d",num4);
getch();
}
