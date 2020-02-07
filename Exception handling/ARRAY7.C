 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 char a[100],b;
 int s,v;
 clrscr();
 printf("\nEnter a String:");
 gets(a);
 for(v=0;*(a+v)!='\0';v++);
 for(s=0,--s;s<v;b=*(a+s),a[s]=a[v],a[v]=b,s++,v--);
 printf("Reverse string=%s",a);
 getch();
 }