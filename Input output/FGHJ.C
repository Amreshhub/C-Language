void main()
{
int a=1,n,x;
float no=1.0,de,sum=0.0,tram;
clrscr();
printf("Enter how many tram do you want :");
scanf("\n%d",&n);
printf("\nEnter base valu of the given tram:");
scanf("\n%d",&x);
de=x;
while(a<=n)
{
	tram=no/de;
	sum=sum+tram;
	a++;
	de=de*x*x;
	}
printf("\nSum of %d tram=%f",n,sum);
getch();
}
