void main()
{
int num,cnum,fac=1;
clrscr();
printf("Enter a number:");
scanf("\n%d",&num);
cnum=num;
while(cnum)
{
	fac=fac*cnum;
	cnum--;
	}
printf("\nFactriol value of %d!=%d",num,fac);
getch();
}