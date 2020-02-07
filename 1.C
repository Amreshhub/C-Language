#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define row 100
#define col 100
void main()
{
int mat1[row][col],mat2[row][col],sum[row][col],m,n,r,c,ctr=0;
a1:clrscr();
printf("\nEnter first matrix row size:");
scanf("\n%%d",&m);
if(m<1||m>100)
{
	printf("\nMust Enter row size in first matrix between 1 to 100");
	delay(3000);
	goto a1;
	}
b1:printf("\nEnter first matrix columan size:");
scanf("\n%d",&n);
if(n<1||n>100)
{
	printf("\nMust enter colmun size in first matrix between 1 to 100");
	delay(3000);
	goto b1;
	}
for(r=0;r<m;r++)
for(c=0;c<n;c++)
{
printf("\nEnter number:%d::",++ctr);
scanf("\n%d",&mat1[r][c]);
}
c1:printf("\nEnter row size in secoand  matrix:");
scanf("\n%d",&m);
if