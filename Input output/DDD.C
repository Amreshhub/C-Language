void main()
{
int a,num=0.0,sum=0.0;
clrscr();
printf("Enter no:");
scanf("\n%d",&num);
while(num>0)
{
	a=num%10;
	sum=sum+a;
	num=num/10;
	}
printf("Sum of degit:%d",sum);
getch();
}
