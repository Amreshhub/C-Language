void main()
{
int num,final,b,count=0;
clrscr();
printf("Enter no of starting tram:");
scanf("\n%d",&num);
printf("\nEnter on of end tram:");
scanf("\n%d"	,&final);
while(num<final)
{
	b=2;
	while(b<=num/2)
	{
	     if(num%b==0)
	     b=num;
	     b++;
	     }
	if(b<=num)
	{
		printf("%d ",num);
		count++;
		}
	num++;
	}
	getch();
	}