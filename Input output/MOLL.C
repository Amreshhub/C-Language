void main()
{
long int pcode;
int a=1;
float mrp,qty,rate=0.0,dis,paybal,vat,net,total;
clrscr();
printf("Enter producet code for given prodcct:");
scanf("\n%ld",&pcode);
if(pcode>0)
{
       if(pcode<=100)
		rate=10.0;
       else
       if(pcode<=500)
		rate=20.0;
       else
       if(pcode<=1000)
		rate=30.0;
       else
		rate=0.0;
    printf("\nEnter quantety tokan:%d",qty);
    scanf("\n%d",&qty);
    if(qty>0)
    {
	printf("\nEnter mrp of the given producet:");
	scanf("\n%d",&mrp);
	if(mrp>0)

	{
	printf("\nInvalied mrp found plz enter agan");
		  a=0;}
     }
     else{
	printf("\nInvalied quantaty found plz enter agan:");
		a=0;}

}
else{
printf("\nInvalied producet no found plz enter agan:");
		a=0;}
if(a)
{
total=mrp*qty;
dis=total*rate/100;
paybal=total-dis;
vat=paybal*12.5/100;
net=vat+paybal;
clrscr();
printf("\t\t\t**************bill*************");
printf("\n\t\t\tProducet no:          %ld",pcode);
printf("\n\t\t\tMrp in Rs:            %f",mrp);
printf("\n\t\t\tDiscount rate:        %f%%",rate);
printf("\n\t\t\tDiscount amount in Rs:%f",dis);
printf("\n\t\t\t===============================");
printf("\n\t\t\tPaybal amount in Rs:  %f",paybal);
printf("\n\t\t\t12.5%%Vat in Rs:      %f",vat);
printf("\n\t\t\t=================================");
printf("\n\t\t\tNet amount in Rs:     %f",net);
}
getch();
}
