void main()
{
int a=1,n,sum=0.0,tram=1,x;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
printf("\nEnter base value of the given tram:");
scanf("\n%d",&x);
while(a<=n)
{
	sum=sum+tram;
	a++;
	tram=tram*x*x;
	}
printf("\nSum of %dtram=%d",n,sum);
getch();
}