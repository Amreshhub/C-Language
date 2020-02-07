void main()
{
int n,tail=0,haid=1,ntrem=0,a=1;
clrscr();
printf("Enter how many tram do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("%d  ",ntrem);
	haid=tail;
	ntrem=haid;
	ntrem=haid+tail;
	a++;
	}
printf("\n serasce%d=%d",ntrem);
getch();
}

