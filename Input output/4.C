 void main()
 {
 int a=1,n,num,e=0.0,o=0.0;
 clrscr();
 printf("Enter how many you want no:");
 scanf("\n%d",&n);
 while(a<=n)
 {
	printf("\nEnter no:%d:",a);
	scanf("\n%d",&num);
	if(num%2==0)
		e++;
	else
		o++;
	a++;
	}
 printf("\nTotal no of even=%d",e);
 printf("\nTotal no of odd=%d",o);
 getch();
 }