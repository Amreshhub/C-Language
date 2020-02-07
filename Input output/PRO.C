void main()    9
{
long int pcode;
int a=1;
float mrp,qty,rate,pamt,dis,paybal,vat,net;
clrscr();
printf("\nEnter producet no of the given producet:");
scanf("\n%ld",&pcode);
if(pcode>0)
{
	printf("\nEnter MRP of the given producet:");
	scanf("\n%f",&mrp);
	if(mrp>0)
	{
		printf("\nEnter qtyanty tokan of the given producet:");
		scanf("\n%f",&qty);
		if(qty>0)
		{
			pamt=qty*mrp;
		      if(pamt>5000)
		       rate=30.0;
		      else
			rate=15.0;
		}
		else{
			printf("\nInvalied quantety tokan found enter agan:");
				a=0;}
	  }
	  else{
		printf("\nInvalied mrp found Plz Enter agan:");
			a=0;}

}
else{
	printf("\nInvalied producet code found Plz Enter agan:");
		a=0;}
if(a)
{
dis=pamt*rate/100;
paybal=pamt-dis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\n\t\t\t****************Bill Information*******************");
printf("\n\t\t\tproducet code:                       %ld",pcode);
printf("\n\t\t\tMrp in Rs:                           %f",mrp);
printf("\n\t\t\tQuantaty tokan of the given producet:%f",qty);
printf("\n\t\t\t===================================================");
printf("\n\t\t\tTotal purchage amount in Rs:         %f",pamt);
printf("\n\t\t\tDiscount rate:                       %f%%",rate);
printf("\n\t\t\tDiscount amount in Rs:               %f",dis);
printf("\n\t\t\t===================================================");
printf("\n\t\t\tPaybal amount in Rs:                 %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:                     %f",vat);
printf("\n\t\t\t===================================================");
printf("\n\t\t\tNET BILL AMOUNT IN RS:               %f",net);
}
getch();
}