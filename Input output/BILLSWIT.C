//footware//
void main()
{
int a=1;
char cname;
float mrp,rate,dis,paybal,vat,net;
clrscr();
printf("\nEnter company name as A(Action)/b(Bata)/W(woodland):");
scanf("\n%c",&cname);
switch(cname)
{
case'A':
case'a':
	 rate=20;
	 break;
case'B':
case'b':
	 rate=30;
	 break;
case'W':
case'w':
	 rate=50;
	 break;
default:
	printf("\nInvalied company name found enter agan:");
	   a=0;
}
if(a)
{
printf("\nEnter mrp of given producet:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
paybal=mrp-dis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\n\t\t\t***********bill*********");
printf("\n\t\t\tCompeny name A(action)/B(bata)/W(woodland):%c",cname);
printf("\n\t\t\tMrp in RS:                                 %f",mrp);
printf("\n\t\t\tDiscount Rate:                             %f",rate);
printf("\n\t\t\tDiscount Amount in Rs:                     %f",dis);
printf("\n\t\t\t======================================================");
printf("\n\t\t\tPaybal amount in Rs:                       %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:                           %f",vat);
printf("\n\t\t\t======================================================");
printf("\n\t\t\tNet bill amount in Rs:                     %f",net);
}
else
  printf("\nInvalied mrp found Plz Enter agan:");
}
getch();
}
