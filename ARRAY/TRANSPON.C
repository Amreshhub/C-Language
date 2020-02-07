#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define row 100
#define col 100
void main()
{
int mat[row][col],m,r,c,tran[row][col],ctr=0;
s1:clrscr();
printf("\nEnter size of matriex :");
scanf("\n%d",&m);
if(m<1||m>100)
{
	printf("\nMust Enter size between 1 to 100:");
	delay(3000);
	goto s1;
	}
for(r=0;r<m;r++)
for(c=0;c<m;c++)
{
	printf("\nEnter number :%d:",++ctr);
	scanf("\n%d",&mat[r][c]);
}
printf("\nPrinting Transpons Matrix");
for(r=0;r<m;r++)
for(c=0;c<m;c++)
tran[c][r]=mat[r][c];
clrscr();
printf("\nPrinting value of oregnal Matrix");
for(r=0;r<m;r++){
printf("\n");
for(c=0;c<m;c++)
printf("%d ",mat[r][c]);
}
printf("\nPrinting value of transponce of matrix");
for(r=0;r<m;r++){
printf("\n");
for(c=0;c<m;c++)
printf("%d ",tran[r][c]);
}
getch();
}


