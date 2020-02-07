void main()
{
int a=1,n,num,po=0.0,ne=0.0;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num>0)
		po++;
	else
		ne++;
		a++;
		}
printf("\nTotal no of positiv=%d",po);
printf("\ntotal no of negative=%d",ne);
getch();
}