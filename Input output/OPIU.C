void main()
{
int a=1,num,high=0,n;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	 high=num;
	 if(num>high)
	 high=num;
	 a++;
	 }
printf("\nHighest valu=%d",high);
getch();
}