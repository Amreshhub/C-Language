void main()
{
int n,a=1,x,tram=1;
float sum=0.0;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
printf("\nEnter base value of the serice:");
scanf("\n%d",&x);
while(a<=n)
{
	sum=sum+tram;
	a++;
	tram=tram*x;
	}
printf("\nsum of %dtram=%f",n,sum);
getch();
}