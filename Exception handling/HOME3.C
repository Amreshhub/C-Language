#include<stdio.h>
#include<conio.h>
void main()
{
int num[3][4],a,b;
clrscr();
for(a=0;a<3;a++){
printf("\nInsert value of row:%d",a+1);
for(b=0;b<4;b++){
printf("\nEnter number:%d",b+1);
scanf("\n%d",num[a][b]);
}
}
for(a=0;a<3;a++){
printf("\n");
for(b=0;b<4;b++){
printf("%d ",num[a][b]);
}
}
getch();
}

