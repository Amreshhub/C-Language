void main()
{
int a=1,num,po=0,ne=0,n;
clrscr();
printf("Enter how many do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num>=0)
		po++;
	else
		ne++;
		a++;
	}
printf("\nTotal no of positeve no=%d",po);
printf("\ntotal no of negitev no=%d",ne);
getch();
}																																																																																																																																																																																																																																																																																       xxx