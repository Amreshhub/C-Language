void main()
{
int n,tail=0,haid=1,a=1,tram=0;
clrscr();
printf("\Enter tram how many do you want:");
scanf("\n%d",&n);
while(a<=n)
{      printf("%d ",tram);
	tail=haid;
	haid=tram;
	tram=haid+tail;
	a++;}
getch();
}


