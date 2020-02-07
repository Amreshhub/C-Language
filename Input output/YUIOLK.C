void main()
{
int n ,high=0.0,a=1,num;
clrscr();
printf("enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter nno:%d:",a);
	scanf("\n%d",&num);
	 if(a==1)
	 high=num;
	 if(num>high)
	 high=num;
	 a++;
	 }
printf("\n highest valu=%d",high);
getch();
}
