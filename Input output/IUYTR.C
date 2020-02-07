void main()
{
int n,x,tram=1,sum=0.0,a=1;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
printf("\n Enter valu in base:");
scanf("\n%d",&x);
while(a<=n)
{
	sum=sum+tram;
	a++;
	tram=tram*x;

	}
printf("\nValue in %dtram=%d",n,sum);
getch();
}