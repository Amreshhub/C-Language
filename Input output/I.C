void main()
{
int num,y=1,prod;
clrscr();
printf("Enter whose tabal do you want:");
scanf("\n%d",&num);
while(y<=10)
{
      prod=num*y;

printf("\n%dx%d=%d",num,y,prod);
y++;
}
getch();
}
