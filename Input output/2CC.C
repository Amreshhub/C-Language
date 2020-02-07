void main()
{
int y=1,x,p,a=1;
clrscr();
printf("Enter base value:");
scanf("\n%d",&x);
printf("\nEnter power of the base:");
scanf("\n%d",&p);
while(a<=p)
{
y=y*x;
a++;
}
printf("\ny=%d",y);
getch();
}