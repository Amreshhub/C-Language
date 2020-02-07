//book//
void main()
{
int a=1;
char pname;
float mrp,rate,dis,paybal,vat,net;
clrscr();
printf("\nEnter publisher name T(TMH)/B(BPB)/V(VEENUS):");
scanf("\n%c",&pname);
switch(pname)
{
case'T':
case't':
	  rate=20;
	  break;
case'B':
case'b':
	  rate=25;
	  break;
case'V':
case'v':
	  rate=30;
	  break;
default:
	 printf("\nInvalied publishre name found Enter agan:");
		a=0;
}
if(a)
{
printf("\nEnter mrp of given publishar name book:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
paybal=mrp-dis;
vat=paybal*12.5/100;
net=paybal+vat;
clrscr();
printf("\n\t\t\t*****************bill******************");
printf("\n\t\t\tPublishar name:            %c",pname);
printf("\n\t\t\tMrp In Rs:                 %f",mrp);
printf("\n\t\t\tDiscount rate:             %f%%",rate);
printf("\n\t\t\tDiscount amount in RS:     %f",dis);
printf("\n\t\t\t========================================");
printf("\n\t\t\tPaybal amount in Rs:       %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:           %f",vat);
printf("\n\t\t\t========================================");
printf("\n\t\t\tNet bill amount in Rs:     %f",net);
}
else
  printf("\nInvalied Mrp found Plz enter agan:");
}
getch();
}

