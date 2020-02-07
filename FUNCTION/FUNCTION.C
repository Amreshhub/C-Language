#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
int smollest(int *pnum,int n){
int list,f;
for(f=0;f<n;pnum++,f++){
if(f==0)
list=*pnum;
else
if(*pnum<list)
list=*pnum;
}
return(list);
}
void main(){
int num[size],n,f,list;
d1:clrscr();
printf("\nHow many number do you want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nInvalied number found plz Number Enter between 1To %d",size);
	delay(3000);
	goto d1;
	}
for(f=0;f<n;f++)
{
	printf("\nEnter  number %d::",f+1);
	scanf("\n%d",&num[f]);
	}
list=smollest(num,n);
	printf("\nSmollest value%d number=%d",n,list);
getch();
}