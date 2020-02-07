void main()
{
int a,num,count=0.0,sum=0.0,ncopy;
clrscr();
printf("Enter degit only seven:");
scanf("\n%d",&num);
ncopy=num;
while(ncopy>0)
{
	ncopy=ncopy/10;
	count++;
	}
if(count==7)
{
	while(num>0)
	{
		a=num%10;
		sum=sum+a;
		num=num/10;
		}
printf("\nSum of alternat degit:%d",sum);
}
else
printf("\nInvalied no of diget found plz enter seven no only:");
getch();
}