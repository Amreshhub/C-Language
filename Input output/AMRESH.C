void main()
{
int a=1,n,num,hig=0.0,small=0.0;
clrscr();
printf("Enter how many no do you want:");
scanf("\n%d",&n);
while(a<=n)
{
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(a==1)
	   hig=num;
	else
	   if(num>hig)
		hig=num;
	   else
	   small=num;
	    if(num<small)
	    small=num;
	    a++;
	    }
printf("\nhighest value=%d",hig);
printf("\nSmallest valu=%d",small);
getch();
}
