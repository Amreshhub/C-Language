void main()
{
int a=1,n,num,hig=0.0;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	hig=num;
	if(num>hig)
	hig=num;
	a++;
	}
printf("\nHighest value =%d",hig);
getch();
}