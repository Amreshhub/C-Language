void main()
{
int s=1,n,num,po=0.0,ne=0.0;
clrscr();
printf("Enter how many time you want no:");
scanf("\n%d",&n);
while(s<=n)
{
	printf("\nEnter no:%d:",s);
	scanf("\n%d",&num);
	if(num>0)
		po++;
	else
		ne++;
	s++;
	}   clrscr();
printf("\nTotal no of positive:%d",po);
printf("\nTotal no of negitev:%d",ne);
getch();
}
