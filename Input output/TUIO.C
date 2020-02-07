void main()
{
int n,a=1,x;
float no=1 ,de=1,sum=0.0,tram;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
printf("\nEnter base value of the given tram:");
scanf("\n%d",&x);
while(a<=n)
{
	tram=no/de;
	sum=sum+tram;
	a++;
	de=de*x;
	}
printf("\nSum of %dtram=%f",n,sum);
getch();
}