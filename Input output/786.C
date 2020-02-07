void main()
{
int n,tail=0,haid=1,tram=0,y=1;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
while(y<=n)
{
	printf("%d ",tram);
	tail=haid;
	haid=tram;
	tram=tail+haid;
	y++;
	}
getch();
}