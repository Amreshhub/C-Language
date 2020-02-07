//program based on convert integer to binary number
 #include<stdio.h>
 #include<conio.h>
 #include<dos.h>
 #define size 200
 void main()
 {
 int bin[size],num,cnum,a;
 n1:clrscr();
 printf("Enter Positive integer value:");
 scanf("\n%d",&num);
 if(num<=0||num>size)
 {
	printf("\nMust inter positive number onley:");
	delay(2000);
	goto n1;
	}
 for(cnum=num,a=0;cnum>0;bin[a++]=cnum%2,cnum=cnum/2);
 printf("\nEquavalent binary no of %d=",num);
 for(--a;a>=0;a--)
 printf("%d",*(bin+a));
 getch();
 }
