#include<stdio.h>
#include<conio.h>
void main()
{
float num[5];
int i;
clrscr();
for(i=0;i<5;i++){
printf("\nEnter number=%d!!",i+1);
scanf("\n%f",&num[i]);
}
clrscr();
printf("\nPrinting values of arry elemant\n");
for(i=0;i<5;i++)
printf("%f ",*(num+i));
getch();
}