 void main()
 {
 int num=0,sum=0.0,b=1,count=0,n;
 clrscr();
 printf("Enter how many perfacet no do you want:");
 scanf("\n%d",&n);
 while(count<n)
 {
   while(b<=num/2)
   {
       if(num%b==0)
	sum=sum+b;
	b++;
	}
   printf("%d ",num);
   count++;
   }
   num++;
   getch();
   }