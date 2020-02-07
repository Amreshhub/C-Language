void main()
{
int n ,num,even=0,odd=0,a=1;
clrscr();
printf("Enters how no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	while(num>0)
	{
		if(num%2==0)
			even++;
		else
			odd++;
	  }
printf("\nTotal no of even=%d",even);
printf("\ntotal no of odd=%d",odd);
getch();
}