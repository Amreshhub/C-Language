void main()
{
int s=0,n;
clrscr();
printf("how many you want no:");
scanf("\n%d",&n);
if(n%5!=0)
n=n*5;
while(s<=n);
{
	printf("%d ",&s);
	s=s+5;
	}
getch();
}

