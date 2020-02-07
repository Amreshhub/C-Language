//program based on for loop
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int sum=0,n,a,num;
clrscr();
s1:printf("\nEnter how many number do you want to enter:-");
scanf("\n%d",&n);
if(n<=0)
{
	printf("\nInvalied entery found plz enter agan");
	delay(2000);
	goto s1;
	}
for(a=0;a<n;a++)
{
	printf("\nEnter number %d:",a+1);
	scanf("\n%d",&num);
	sum=sum+num;
}
printf("\nSUM of %d num=%d",n,sum);
getch();
}//close of main


