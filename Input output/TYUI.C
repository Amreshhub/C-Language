void main()
{
int sum=0,rev=0,d,num;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
while(num>0)
{
	  d=num%10;
	  sum=sum+d;
	  rev=rev*10+d;
	  num=num/10;
	  }
printf("\nSumof number=%d",sum);
printf("\nReverse valu=%d",rev);
getch();
}