void main()
{
long int pcode;
int d=8;
float mrp,qty,puramt,dis,pay,vat,net,rate;
clrscr();
printf("\nEnter producet code of the given producet:");
scanf("\n%ld",&pcode);
if(pcode>0)
{
	printf("\nEnter mrp Of the Given producet:");
	scanf("\n%f",&mrp);
	if(mrp>0)
	{
		printf("\nEnter Quantaty tokan:");
		scanf("\n%f",&qty);
		 if(qty>0)
		 {
			puramt=mrp*qty;
			if(puramt>1000)
				if(puramt<=2000)
					rate=20.0;
				 else
				 if(puramt<=5000)
					rate=25.0;
				 else
					rate=30;
		 }else{
			printf("\nINvalied  qutaty found Plz Enter agan:");
				d=0;}
	}
	else{
		printf("\nInvalied  Mrp found plz enter agan:");
			d=0;}
}
else{
	printf("\ninvalied producet code found Plz Enter agan:");
		d=0;}
if(d)
{
dis=puramt*rate/100;
pay=puramt-dis;
vat=pay*12.5/100;
net=pay+vat;
clrscr();
printf("\n\t\t\t************Bill Information*************");
printf("\n\t\t\tProducet code:               %ld",pcode);
printf("\n\t\t\tMrp In RS:                   %f",mrp);
printf("\n\t\t\tQuantaty tokan:              %f",qty);
printf("\n\t\t\t==========================================");
printf("\n\t\t\tPurchage amount in Rs:       %f",puramt);
printf("\n\t\t\tDiscount rate:               %f%%",rate);
printf("\n\t\t\tDiscount amount in Rs:       %f",dis);
printf("\n\t\t\t==========================================");
printf("\n\t\t\tPaybal amount in Rs:         %f",pay);
printf("\n\t\t\t12.5%%Vat in Rs:       	     %f",vat);
printf("\n\t\t\t===========================================");
printf("\n\t\t\tNet Bill amount in Rs:       %f",net);
}
getch();
}
