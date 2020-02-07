void main()
{
int n,num,podd=0,a=1;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num>0)
	  if(num%2!=0)
	     podd++;
	     a++;
	     }
printf("\nTotal no of positive odd=%d",podd);
getch();
}

