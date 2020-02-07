void main()
{
int num,a=1,sum=0.0;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
while(a<=num/2)
{
	if(num%a==0)
	sum=sum+a;
	a++;
	}
if(sum==num)
	printf("\n%d is an not prime no",num);
else
	printf("\n%d is an prime no",num);
getch();
}



