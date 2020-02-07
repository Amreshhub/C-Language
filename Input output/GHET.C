void main()
{
int a=1,n,num,small=0.0;
clrscr();
printf("How many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	small=num;
	if(num<small)
	small=num;
	a++;
	}
printf("\nSmallast value=%d",small);
getch();
}