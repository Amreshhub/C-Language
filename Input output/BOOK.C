//book//
void main()
{
char pname;
int a=1;
float mrp,rate,dis,paybal,vat,net;
clrscr();
printf("\nEnter mrp of the publisher:");
scanf("\n%f",&mrp);
if(mrp>0)
{
	printf("\nEnter publisher name B(BPB)/T(TMH)/V(vemmus)");
	scanf("\n%c",&pname);
	if(pname>0)

	if(pname=='B'||pname=='b')
	    rate=30.0;
	else
	if(pname=='T'||pname=='t')
	   rate=15.0;
	else
	if(pname=='V'||pname=='v')
	   rate=20.0;
	 else{
	  printf("\nInvalied publisher name found|plz Enter agan");
	      a=0;}
}
else{
 printf("\nInvalied mrp found|plz enter agan");
    a=0;}
if(a)
{
dis=mrp*rate/100;
paybal=mrp-dis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\n\t\t\t*************Bill information***********");
printf("\n\t\t\tPublisher name B(BPB)/T(TMH)/V(VEENUS):%c",pname);
printf("\n\t\t\tMrrp of the publishar:                 %f",mrp);
printf("\n\t\t\tDiscount rate:                         %f%%",rate);
printf("\n\t\t\tDiscount Amount in Rs:                 %f", dis);
printf("\n\t\t\t===========================================");
printf("\n\t\t\tPaybal amount in Rs:                   %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:                       %f",vat);
printf("\n\t\t\t============================================");
printf("\n\t\t\tNEt bill amount in Rs:                 %f",net);
}
getch();
}