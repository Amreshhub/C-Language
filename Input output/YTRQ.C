void main()
{
int n,num=2,b,ctr=0;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(ctr<n)
{
	b=2;
	while(b<=num/2)
	{
		if(num%b==0)
		b=num;
		b++;																																																																																																																																																																																																																																	b++;
	}
	if(b<=num)
	{
		printf("%d ",num);
		ctr++;
		}
		num++;
		}
		getch();
		}