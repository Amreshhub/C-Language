void main()
{
int n,num=2,b,count=0;
clrscr();
printf("Enter how many prime do you want:");
scanf("\n%d",&n);
while(count<n)
{
	b=2;
	while(b<=num/2)
	{
		if(num%b==0)
		  b=num;
		  b++;}
	   if(b<=num)
	   {
		printf("%d ",num);
		count++;
		}
	   num++;
	   }
	   getch();
	   }