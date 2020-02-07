void main()
{
long int mno;
int a=6;
float unit,rate,charged;
clrscr();
printf("Enter Meter no:");
scanf("\n%ld",&mno);
if(mno>0)
{
	printf("\nEnter Unit conjumed:");
	scanf("\n%f",&unit);
	if(unit>0)
	{
		if(unit<=60)
		       rate=2.25;
		else
		if(unit<=100)
			rate=3.50;
		else
		if(unit<=200)
			rate=4.00;
		else
			rate=4.50;
	}
	else{
		printf("\nInvalied unite conjumwd found plz enter agan:");
			a=0;}
}
else{
	printf("\nInvalied meter no found plz enter agan:");
		a=0;}
if(a)
{
charged=unit*rate;
clrscr();
printf("\n\t\t\t***********bill*******************");
printf("\n\t\t\tMeter no:        %ld",mno);
printf("\n\t\t\tUnit Conjumed:	 %f",unit);
printf("\n\t\t\tUnit rate:       %f",rate);
printf("\n\t\t\t=================================");
printf("\n\t\t\tCharged Pay in Rs:%f",charged);
}
getch();
}