void main()
{
long int pcode;
int a=1;
float mrp,qty,total,rate,bdis,cdis=2.0,paybal,vat,net;
clrscr();
printf("\nEnter Producet code of the producet tokan:");
scanf("\n%ld",&pcode);
if(pcode>0)
{
	printf("\nEnter Mrp of the Product Tokan:");
	scanf("\n%f",&mrp);
	if(mrp>0)
	{
		printf("\nEnter Quantaty tokan of the producet:");
		scanf("\n%f",&qty);
		if(qty>0)
		{
			if(qty>=10)
				if(qty<=20)
				 rate=15.0;
				else
				if(qty<=50)
				rate=20.0;
				else
				rate=25.0;
		}
		else{
		printf("\nInvalied quantaty tokan found Plz enter agan:");
			  a=0;}

	   }
	   else{
	    printf("\nInvalied mpr found enter agan:");
		  a=0;}
}
else{
printf("\nInvalied producet code found Plz enter agan:");
	 a=0;}
if(a)
{
total=mrp*qty;
bdis=total*rate/100;
cdis=total*2.0/100;
paybal=total-bdis-cdis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\t\t\t****************bill***************");
printf("\n\t\t\tProducet code:        %ld",pcode);
printf("\n\t\t\tMrp in Rs:            %f",mrp);
printf("\n\t\t\tQuantaty Tokan of the producet %f",qty);
printf("\n\t\t\t===================================");
printf("\n\t\t\tTotal purchage amount in Rs:   %f",total);
printf("\n\t\t\tBulk Discount:                 %f",bdis);
printf("\n\t\t\tDiscount rate:                 %f",rate);
printf("\n\t\t\tCash Discount:                 %f",cdis);
printf("\n\t\t\t====================================");
printf("\n\t\t\tPaybal Amount in Rs:           %f",paybal);
printf("\n\t\t\t12.5%%vat amount in Rs:        %f",vat);
printf("\n\t\t\t=====================================");
printf("\n\t\t\tNet bill amount in Rs:         %f",net);
}
getch();
}

