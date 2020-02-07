void main()
{
int s=1,n,num,sum=0.0,avj;
clrscr();
printf("How miny time you want no:");
scanf("\n%d",&n);
while(s<=n)
{
	printf("\nEnter no :%d:",s);
	scanf("\n%d",&num);
	sum=sum+num;
	s++;
	}
	avj=sum/n;
printf("\nSum of no=%d",sum);
printf("\nAvaraje value=%d",avj);
getch();
}
