void main()
{
int a=1,n,num,podd=0.0;
clrscr();
printf("Enter how many you want no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num>0&&num%2!=0)
	podd++;
	a++;
	}
printf("\n Total no of positive odd:%d",podd);
getch();
}