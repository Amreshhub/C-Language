void main()
{
long int pno;
int a=3;
float mrp,rate,dis,net;
clrscr();
printf("\nEnter producet no:");
scanf("\n%ld",&pno);
if(pno>0){ if(pno>0)
	if(pno<=100)
		rate=10.0;
	else
	 if(pno<=300)
		rate=15.0;
	 else
	  if(pno<=700)
		rate=20.0;
	  else
		rate=25.0;
}
else{
	printf("\nInvalied producet no found Plz enter agan:");
		a=0;}
if(a)
{
printf("\nEnter Mrp of the givin product:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
net=mrp-dis;
clrscr();
printf("\t\t\t***********Bill***********");
printf("\n\t\t\tProducet no	 %ld",pno);
printf("\n\t\t\tMrp in Rs:   	 %f",mrp);
printf("\n\t\t\tDiscount rate	 %f%%",rate);
printf("\n\t\t\tDiscount Rs: 	 %f",dis);
printf("\n\t\t\t=========================");
printf("\n\t\t\tNet paybal amoun %f",net);
}
else
	printf("\nInvalied Mrp found Enter agan:");
}
getch();
}
