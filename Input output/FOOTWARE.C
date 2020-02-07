//footware//
void main()
{
long int artno;
char cname;
int a=1;
float mrp,rate,dis,pabal,vat,net;
clrscr();
printf("Enter artecal of the given footware:");
scanf("\n%ld",&artno);
if(artno>0)
{
	printf("\nEnter Mrp of the given footware:");
	scanf("\n%f",&mrp);
	if(mrp>0)
	{
		printf("\nEnter Compinay name A(action)/L(liberty)/W(woodland):");
		scanf("\n%c",&cname);
		if(cname=='A'||cname=='a')
		    rate=20.0;
		else
		if(cname=='L'||cname=='l')
		    rate=15.0;
		else
		if(cname=='W'||cname=='w')
		    rate=50.0;
		else{
		 printf("\nInvalied compinay name found|Plz Enter agan:");
			 a=0;}
	   }
	   else{
	      printf("\nInvalied MrP found|Plz Enter agan:");
			 a=0;}
}
else{
  printf("\nInvalied artical no founnd|plz Enter agan:");
	   a=0;}
if(a)
{
dis=mrp*rate/100;
pabal=mrp-dis;
vat=pabal*12.5/100;
net=pabal+vat;
clrscr();
printf("\n\t\t\t***********Bill detials***********");
printf("\n\t\t\tArtical no:           %ld",artno);
printf("\n\t\t\tMRP in Rs;            %f",mrp);
printf("\n\t\t\tDiscount rate:        %f",rate);
printf("\n\t\t\tDiscount amount in:   %f",dis);
printf("\n\t\t\t===================================");
printf("\n\t\t\tPaybul amount in Rs;  %f",pabal);
printf("\n\t\t\tVat amount in Rs:     %f",vat);
printf("\n\t\t\t===================================");
printf("\n\t\t\tNet bill amount in Rs:%f",net);
}
getch();
}