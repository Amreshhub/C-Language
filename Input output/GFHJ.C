void main()
{
int y=1,x,p,a=1;
clrscr();
printf("Enter value of base");
scanf("\n%d",&x);
printf("\nEnter power of given base:");
scanf("\n%d",&p);
while(a<=p)
{
	y=y*x;
	a++;}
printf("\ny=%d",y);
getch();

}