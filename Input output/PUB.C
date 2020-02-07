void main()
{
char pname;
int a=7;
float mrp,rate=0.0,dis=0.0,net;
clrscr();
printf("\nEnter Publisher name:");
scanf("\n%c",&pname);
switch(pname)
{
case 'T':
case 't':
	rate=10.0;
	break;
case 'B':
case 'b':
	rate=20.0;
	break;
default:
	rate=0.0;
}

if(a)
{
printf("\nEnter mrp of the given book");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
net=mrp-dis;
clrscr();
printf("\n\t\t\t****************************************************");
printf("\n\t\t\t\t\tBill Detail");
printf("\n\t\t\t****************************************************");
printf("\n\t\t\tMixume Retail Price   :    %f",mrp);
printf("\n\t\t\tDiscount Amount       :    %f",dis);
printf("\n\t\t\tNet Paybal amount     :    %f",net);
}
else
	printf("\nInvalied Mrp found Enter Agan:");
}
getch();
}