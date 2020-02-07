void main()
{
int a=1,n,num=0.0,sum=0.0,ave=0.0;
clrscr();
printf("How many you want no :");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	sum=sum+num;
	a++;
	}
ave=num/n;
printf("\n Sum of no:%d",sum);
printf("\nAvreje value:%d",ave);
getch();
}

