void main()
{
int a=0,n;
clrscr();
printf("How many time you want no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("%d ",&a);
	if(n%5!=0)
	n=n*5;
	a=a+5;
	}
getch();
}