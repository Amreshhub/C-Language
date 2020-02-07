void main()
{
int a,num,sum=0.0,ncopy,dcount;
clrscr();
printf("Enter 5degit no:");
scanf("\n%d",&num);
ncopy=num;
while(ncopy>0)
{
	ncopy=ncopy/10;
	dcount++;
	}
if(dcount==5)
{
	while(num>0)
	{
		a=num%10;
		sum=sum+a;
		num=num/100;}
printf("\nSum of alternat no:",sum);
}
else
printf("\nInvalied no of diget found plz Enter agan:");
getch();
}