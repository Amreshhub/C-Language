//switch//
void main()
{
char type;
int a=1,size;
float mrp,rate,dis,paybal,vat,net;
clrscr();
printf("\nEnter type of tv B(Black&whitw)/C(color):");
scanf("\n%c",&type);
switch(type)
{
case 'B':
case 'b':
	     rate=20.0;
	     break;
case 'C':
case 'c':
	printf("\nEnter size of tv:");
	scanf("\n%d",&size);
	switch(size)
	{
	case 14:
		    rate=25.0;
		    break;
	case 21:
		     rate=30.0;
		     break;
	default:
		  printf("\nInvalied size found plz Enter agan:");
			 a=0;
	}
	break;
 default:
	     printf("\nInvalied Tv type found enter agan:");
			a=0;
}

if(a)
{
printf("\nEnter Mrp of the given tv:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
paybal=mrp-dis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\n\t\t\t***************bill*******************");
printf("\n\t\t\tTv type B(Black&White):     %c",type);
printf("\n\t\t\tMrp in Rs:                  %f",mrp);
printf("\n\t\t\tDiscount rate in Rs:        %f",rate);
printf("\n\t\t\tDiscount amount in Rs:      %f",dis);
if(type=='C'||type=='c')
printf("\n\t\t\tSize in tv %d\"inch:",size);
printf("\n\t\t\t=======================================");
printf("\n\t\t\tPaybal Amount in Rs:        %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:            %f",vat);
printf("\n\t\t\t========================================");
printf("\n\t\t\tNet bill amount in Rs:      %f",net);
}
else
printf("\nInvalied mrp found enter agan:");
}
getch();
}
