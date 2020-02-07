void main()
{
int a=1,n,num,h;
clrscr();
printf("Enter how many time you want no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	h=num;
	 if(num>h)
	 h=num;
	 h++;
	 a++;
	 }
printf("\nHighest value =%d",h);
getch();
}