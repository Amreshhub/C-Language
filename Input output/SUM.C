void main()
{
int 																																																			num,sum=0.0,d;
clrscr();
printf("\nEnter a num:");
scanf("\n%d",&num);
while(num>0)
{
	d=num%10;
	sum=sum+d;
	num=num/10;
	}
printf("\nSum of digite:%d",sum);
getch();
}
