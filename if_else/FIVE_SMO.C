//accept five number chack and display smollest number//
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,w=1;
clrscr();
while(w<6)
{
	printf("\nEnter number:%d",w);
	scanf("\n%d%d%d%d%d",&a,&b,&c,&d,&e);
	}
if(a<b)
	if(a<c)
		if(a<d)
			if(a<e)
				printf("\n Smolest value=%d",a);
			else
				printf("\n Smollest value=%d",e);
		else
		if(d<e)
			printf("\nSmollest value=%d",d);
		else
			printf("\nSmollest value=%d",e);
	else
	if(c<d)
		if(c<e)
			printf("\nSmollest value=%d",c);
		else
			printf("\nSmollest value=%d",e);
	else
	if(d<e)
		printf("\nSmollest value=%d",d);
	else
		printf("\nSmollest value=%d",e);
else
if(b<c)
	if(b<d)
		if(b<e)
			printf("\nSmollest value=%d",b);
		else
			printf("\nSmollest value=%d",e);
	else
	if(d<e)
		printf("\nSmollest value=%d",d);
	else
		printf("\nSmollest value=%d",e);
 else
 if(c<d)
	if(c<e)
		printf("\nSmollest value=%d",c);
	else
		printf("\nSmollest value=%d",e);
 else
 if(d<e)
	printf("\nSmollest value=%d",d);
 else
	printf("\nSmollest value=%d",e);
 getch();
 }