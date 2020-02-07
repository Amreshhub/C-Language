void main()
{
int num,dcount=0.0;
clrscr();
printf("Enter anumber:");
scanf("\n%d",&num);
while(num>0)
{
	num=num/10;
	dcount++;
	}
printf("\nTotal no diget:%d",dcount);
getch();
}
