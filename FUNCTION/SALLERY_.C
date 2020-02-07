#include<stdio.h>
#include<conio.h>
#include<dos.h>
float sallery(float *a){
float sall;
sall=*a*10/100;
*a=sall+(*a);
}
void main(){
float num;
a1:clrscr();
printf("\nEnter empolley sallery::");
scanf("\n%f",&num);
if(num<1)
{
	printf("\nMust enter positive value:");
	delay(2000);
	goto a1;
	}
printf("\nBefore incrige sallery is=%f",num);
sallery(&num);
printf("\nAfter incerment sallery is=%f",num);
getch();
}
