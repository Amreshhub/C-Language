void main()
{
long int num,rev=0.0,d;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
while(num>0)
{
	d=num%10;
	rev=rev*10+d;
	num=num/10;
	}
printf("\nReverse value of number:%d",rev);
getch();
}