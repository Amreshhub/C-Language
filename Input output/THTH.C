void main()
{
int a=1,n,num,po=0.0,ne=0.0;
clrscr();
printf("How many time you want no:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\n Enter no:%d:",a);
	scanf("\n%d",&num);
	if(num>0)
		po++;
	else
		ne++;
	a++;
	}
printf("\n total no of positev=%d",po);
printf("\ntotal no of negetive=%d",ne);
getch();
}