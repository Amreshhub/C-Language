#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("\nEnter age of voting:");
scanf("\n%d",&age);
if(age>=18)
	printf("\nHe/She Eligabul for voting:");
else
	printf("\nHe/she not Eligabul for voting:");
getch();
}