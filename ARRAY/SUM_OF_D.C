#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define row 100
#define col 100
void main()
{
int mat[row][col],m,r,c,fdignol=0,rdignol=0,ctr=0;
a1:clrscr();
printf("\nEnterrow and colmun size of squar matrix;");
scanf("\n%d",&m);
if(m<1||m>100)
{
	printf("\nMust Enter size 1 to 100");
	delay(3000);
	goto a1;
	}
for(r=0;r<m;r++)
for(c=0;c<m;c++)
{
	printf("\nEnter number :%d::",++ctr);
	scanf("\n%d",&mat[r][c]);
	if(r==c)
	fdignol=fdignol+mat[r][c];
	if(r+c==m-1)
	rdignol=rdignol+mat[r][c];
	}
printf("\nSum of Forwared Dignol=%d",fdignol);
printf("\nSum of backword Dignol=%d",rdignol);
getch();
}