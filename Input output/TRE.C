void main()
{
int a=1,tram=1,n,x,sum=0.0;
clrscr();
printf("Enter how many tram do you want");
scanf("\n%d",&n);
printf("\nEnter base value of the given tram:");
scanf("\n%d",&x);
while(a<=n)
{
	sum=sum+tram;
	a++;
	tram=tram*x;
	}
printf("\nSum of%dtram=%d",n,sum);
getch();
}
