void main()
{
int num,rev=0.0,a;
clrscr();
printf("Enter a num:");
scanf("\n%d",&num);
while(num>0)
{
	a=num%10;
	rev=rev*10+a;
	num=num/10;
	}
printf("\nReverse order in no:%d",rev);
getch();
}