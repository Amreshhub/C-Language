void main()
{
int n,num=0,sum=0.0,a=1,d;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
while(num>0)
{       d=num%10;
	sum=sum+d;
	num=num/10;
	a++;
    }
printf("\nSum of degite:%d",sum);
getch();
}