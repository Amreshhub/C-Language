#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define row 100
#define col 100
void main()
{
int mat1[row][col],mat2[row][col],prod[row][col],m,n,r,c,ctr=0;
a1:clrscr();
printf("\nEnter 1st matrix row size:");
scanf("\n%d",&m);
if(m<1||m>100)
{
	printf("\nMust Enter 1st matrix row size between 1 to 100");
	delay(3000);
	goto a1;
	}
b1:printf("\nEnter 1st matrix columan size:");
scanf("\n%d",&n);
if(n<1||n>100)
{
	printf("\nMust Enter 1st matrex columan size between 1 to 100");
	delay(3000);
	goto b1;
	}
for(r=0;r<m;r++)
for(c=0;c<n;c++)
{
	printf("\nEnter number:%d::",++ctr);
	scanf("\n%d",&mat1[r][c]);
	}
c1:printf("\nEnter 2nd matrix row size:");
scanf("\n%d",&m);
if(m<1||m>100)
{
	printf("\nMust enter 2nd Matrix row size between 1 to 100");
	delay(3000);
	goto c1;
	}
d1:printf("\nEnter 2nd matrix columan size:");
scanf("\n%d",&n);
if(n<1||n>100)
{
	printf("\nMust enter 2nd matrix columan size between 1 to 100");
	delay(3000);
	goto d1;
	}
for(r=0;r<m;r++)
for(c=0;c<m;c++)
{
	printf("\nEnter number:%d::",++ctr);
	scanf("\n%d",&mat2[r][c]);
	}
prod[r][c]=mat1[r][c]+mat2[r][c];
printf("\nprinting of 1st matrix%d",mat1);
printf("\nPrinting 2nd matrix value%d",mat2);
printf("\nPrinting proudect matrix:%d",prod);
getch();
}

