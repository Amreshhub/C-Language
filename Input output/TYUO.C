void main()
{
int n ,num,sum=0.0,avg=0.0,a=1;
clrscr();
{
printf("How nany no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	sum=sum+num;
	a++;
	avg=sum/n;
	}
printf("\nSum of no:%d",sum);
printf("\nAverage value=%d",avg);
getch();
}