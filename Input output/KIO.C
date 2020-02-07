void main()
{
int a=1,x,p,y=1;
clrscr();
printf("Enter value of base :");
scanf("\n%d",&x);
printf("\nEnter value of power:");
scanf("\n%d",&p);
while(a<=p)
{
	y=y*x;

	a++;
	}
printf("\nsum value in y=%d",y);
getch();
}