void main()
{
int y=1,x,p,a=1;
clrscr();
printf("\nEnter value of x:");
scanf("\n%d",&x);
printf("\nEnter value of p:");
scanf("\n%d",&p);
while(a<=p)
{
y=y*x;
a++;
}
printf("\nvalue=%d",y);
getch();
}