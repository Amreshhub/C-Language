void main()
{
int a,num,sum=0.0,rev=0.0,dcount=0.0,ncopy;
clrscr();
printf("Enter seven diget no:");
scanf("\n%d",&num);
ncopy=num;
while(ncopy>0)
{
       ncopy=ncopy/10;
	dcount++;
	}
if(dcount==7)
{
	while(num>0)
	{
		a=num%10;
		sum=num+a;
		rev=rev*10+a;
		num=num/100;
		}
}
else
printf("\ninvaled no of degit found plz Enter seven degit only");
printf("\nSum of seven no=%d",sum);
printf("\nReverce of no=%d",rev);
getch();
}

