void main()
{
char type;
int a=9,size;
float mrp,rate,dis,pay,vat,net;
clrscr();
printf("Enter tv type As B(black&white)/C(color):");
scanf("\n%c",&type);
switch(type)
{
case 'B':
case 'b':
	rate=20.0;
	break;
case'C':
case'c':
	printf("\nEnter Tv size AS 14\"/21\"inches");
	scanf("\n%d",&size);
	switch(size)
	{
	case 14:
		rate=30.0;
		break;
	case 21:
		rate=35.0;
		break;
	default:
		printf("\nInvalied Tv size found Plz enter agan:");
			a=0;

	}
	   break;
default:
	printf("\nInvalied Tv type found Plz enter agan:");
		a=0;
}

if(a)
{
printf("\nEnter mrp in given tv sat:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
pay=mrp-dis;
vat=pay*12.5/100;
net=pay+vat;
clrscr();
printf("\n\t\t\t***************bill*********************");
printf("\n\t\t\tTv type As B(black&white)/C(Color):%c",type);
printf("\n\t\t\tMrp In given tv:                   %f",mrp);
printf("\n\t\t\tDiscounte rate:                   %f%%",rate);
printf("\n\t\t\tDiscount amount in Rs:             %f",dis);
if(type=='C'||type=='c')
printf("\n\t\t\tTv size %d\":  ",size);
printf("\n\t\t\t=========================================");
printf("\n\t\t\tPaybal amount in Rs:               %f",pay);
printf("\n\t\t\t12.5%%Vat in Rs:                   %f",vat);
printf("\n\t\t\t=========================================");
printf("\n\t\t\tNet Bill Amount in Rs:             %f",net);
}
else
	printf("\nInvalied mrp found Plz Enter agan:");
}
getch();
}