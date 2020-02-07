void main()
{
int a=1,n,num,h;
clrscr();
printf("HOW maney time enter no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter No :%d:",a);
	scanf("\n%d",&num);
	if(num>a)
	h++;
	a++;
}
	printf("\nHigest value in =%d",h);
getch();
}