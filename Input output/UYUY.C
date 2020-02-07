void main()
{
int n,tram=0,a=1,tail=0,haid=1;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
while(a<=n)
{       printf("%d ",tram);
	tail=haid;
	haid=tram;
	tram=haid+tail;
	a++;
	}
getch();
}