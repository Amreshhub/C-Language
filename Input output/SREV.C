void main()
{
int num,sum=0.0,rev=0.0,x;
clrscr();
printf("Enter anumber:");
scanf("\n%d",&num);
while(num>0)
{
	x=num%10;
	sum=sum+num;
	rev=rev*10+x;
	num=num/10;
	}
printf("\nSum of no:%d:",sum);
printf("\nReverce order is:%d",rev);
getch();
}