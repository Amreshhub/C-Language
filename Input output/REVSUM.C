void main()
{
int num,sum=0.0,rev=0.0,a,cnum,count=0.0;
clrscr();
printf("Enter number");
scanf("\n%d",&num);
cnum=num;
while(cnum>0)
{
	cnum=cnum/10;
	count++;
	}
if(count==7)
{
while(num>0)
{
	a=num%10;
	sum=sum+a;
	rev=rev*10+a;
	num=num/100;
	}
}else
printf("\nInvalied no of degit found");
printf("\nSum of no:%d",sum);
printf("\nRevarse order=%d",rev);
getch();
}

