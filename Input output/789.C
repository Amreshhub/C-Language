void main()
{
int num,sum=0,b,cnum;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
cnum=num;
while(cnum<0)
{
	 b=cnum%10;
	 sum=sum+b*b*b;
	 cnum=cnum/10;
	 }
if(sum==num)
	printf("\n%d is an amstrong no;",num);
else
	printf("\n%d is not amstong no",num);
getch();
}