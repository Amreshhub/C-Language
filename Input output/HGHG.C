void main()
{
int a=1,n,num,podd;
clrscr();
printf("Enter how many time you want no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num>0||num%2!==0)
	podd++;
	a++;
	}
printf("\nTotal no of positiv odd:%d",podd);
getch();
}