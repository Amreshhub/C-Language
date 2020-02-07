void main()
{
int a=1,num,sum=0.0,avj;
clrscr();
while(a<=5)
{
	printf("Enter no:%d:\n",a);
	scanf("\n%d",&num);
	sum=sum+num;
	a++;
	}
	avj=sum/5.0;
printf("\nSum  of num ;%d",sum);
printf("\nAvraje valu=%d",avj);
getch();
}