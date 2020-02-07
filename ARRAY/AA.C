#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define row 100
#define col 100
void main()
{
int mat[row][col],m,r,c,trans[row][col];
a1:clrscr();
printf("\nEnter size of row and columan");
scanf("\n%d",&m);
if(m<1||m>100)
{
printf("\mMust enter Size between 1To100");
delay(3000);
goto a1;
}
for(r=0;r<m;r++)
for(c=0;c<m;c++)