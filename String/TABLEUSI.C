#include<stdio.h>
#include<conio.h>
   void main()
   {
   int num,a,table;
   clrscr();
   printf("\nEnter your desired table number:" );
   scanf("\n%d",&num);
   for(a=1;a<=10;a++)
   {
   table=num*a;
   printf("\n%dx%d=%d",num,a,table);
   }
   getch();
   }