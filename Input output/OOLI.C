void main()
{
int a=1,x,n;
float  no,de=1,sum=0.0,tram;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
printf("\nEnter base value of the given tram:");
scanf("\n%d",&x);
no=x;
while(a<=n)
{
	tram=no/de;
	if(a%2==0)
	  sum=sum-tram;
	else
	 sum=sum+tram;
	 a++;
	 de=de*x;
	 }
printf("\nSum of %dtram=%f",n,sum);
getch();
}