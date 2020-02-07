#include<stdio.h>
#include<conio.h>
#define row 100
#define col 100
void main()
{
int num[row][col],even=0,odd=0,r,c,x,y;
clrscr();
printf("\nHow many row do you want to enter:");
scanf("\n%d",&x);
printf("\nHow many colmun do you want to enter:");
scanf("\n%d",&y);
for(r=0;r<x;r++){
printf("\nInsert value of row:%d:",r+1);
for(c=0;c<y;c++){
printf("\nEnter number:%d:",c+1);
scanf("\n%d",&num[r][c]);
if(num[r][c]%2==0)
     even++;
else
     odd++;
}
}
printf("\nTotal count of even%dnos=%d",x*y,even);
printf("\ntotal count of odd%dnos=%d",x*y,odd);
getch();
}

