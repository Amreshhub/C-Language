#include<stdio.h>
#include<conio.h>
#include <dos.h>
#define row 100
#define col 100
void main()
{
int mat[row][col],m,r,c,fdag=0,rdag=0,ctr=0;
a1:clrscr();
printf("\nEnter size of matrix in row,colmun:");
scanf("\n%d",&m);
if(m<1||m>100)
{
	printf("\nMust size Enter between 1 to100:");
	delay(3000);
	goto a1;
	}
for(r=0;r<m;r++)
for(c=0;c<m;c++)
{
	printf("\nEnter number:%d:",++ctr);
	scanf("\n%d",&mat[r][c]);
if(r==c)
fdag=fdag+mat[r][c];
if(r+c==m-1)
rdag=rdag+mat[r][c];
}
printf("\nSUM  of forword daglone=%d",fdag);
printf("\nSum of Reverce daglone=%d",rdag);
getch();
}