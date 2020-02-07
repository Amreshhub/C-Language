void main()
{
int a=5,n=0.0;
clrscr();
printf("How many time you want enter no:");
scanf("\n%d",&n);
if(n%5!=0)
n=5*n;
while(a<=n)
{
printf("%d ",a);
a=a+5;
}
getch();
}