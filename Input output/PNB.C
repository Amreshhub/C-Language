void main()
{
int n ,num,even=0,odd=0,a=1;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num%2==0)
	  even++;
	else
	 odd++;
	 a++;
	 }
printf("\nTotal no of even=%d",even);
printf("\nTotal no of odd=%d",odd);
getch();
}