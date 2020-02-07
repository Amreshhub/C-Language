void main()
{
int x,p,a=1,y=1;
clrscr();
printf("Enter base valu:");
scanf("\n%d",&x);
printf("\nEnter value of the power");
scanf("\n%d",&p);
while(a<=p)
{
   y=y*x;
   a++;}
printf("\nvalue of y=%d",y);
getch();
}