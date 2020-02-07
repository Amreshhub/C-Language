void main()
{
int a=1,num,smoll=0,n;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	smoll=num;
	if(num<smoll)
	smoll=num;
	a++;
	}
printf("\nSmollest value=%d",smoll);
getch();
}