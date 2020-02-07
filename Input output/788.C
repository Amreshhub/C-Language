void main()
{
int x,p,a=1,y=1;
clrscr();
printf("Enter value in base:");
scanf("\n%d",&x);
printf("\nEnter value in power:");
scanf("\n%d",&p);
while(a<=p)
{
	y=x*p;
	a++;}
printf("\nValue in y=%d",y);
getch();
}