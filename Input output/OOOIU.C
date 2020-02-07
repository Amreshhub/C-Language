void main()
{
int n,num,high=0,smoll=0,a=1;
clrscr();
printf("Enter how many no do you  want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	high=num;
	if(num>high)
	high=num;
	else
	smoll=num;
	if(num<smoll)
	smoll=num;
	a++;
	}
printf("\nHighest value=%d",high);
printf("\nsmollest value=%d",smoll);
getch();
}