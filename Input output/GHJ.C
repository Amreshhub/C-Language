void main()
{
int a=1,num,n,s;
clrscr();
printf("Enter How many you want no:");
scanf("\n%d",&n)
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	s=num;
	if(num<s)
	a++;
	}
printf("\nSmollast valu=%d",s);
getch();
}
