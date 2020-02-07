//program based on function call by refarence
#include<stdio.h>
#include<conio.h>
void sal(float *a){
float sal1;
sal1=*a*10/100;
*a=sal1+(*a);
		}//close of function
void main(){
float c;
clrscr();
printf("\nEnter sallery=");
scanf("\n%f",&c);
sal(&c);
printf("\nIncrege sallery =%f",c);
getch();
}//close of main
