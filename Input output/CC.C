void main()
{
long int pno;
int=5;
float mrp,rate,dis,net;
clrscr();
printf("\nEnter producet number:");
scanf("\n%ld",&pno);
if(pno>0)
{
	if(pno>=100)
	    rate=10.0;
	else
	if(pno>=300);
	   rate=15.0;
	else
	if(pno>=700)
	   rate=20.0;
	else
	  rate=25.0;
}
else{
	printf("\nINvalied producet no found plz enter agan:)'
		a=0;}
if(a)
{
printf("\nEnter mrp of the givin producet:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate;
net=mrp-dis;
clrscr();
printf("\t\t\t**************bill***************");
printf("\n\t\t\tProducet no:     %ld",pno);
printf("\n\t\t\tMrp in Rs:       %f",mrp);
printf("\n\t\t\tDiscount rate    %f%%",rate);
printf("\n\t\t\tDiscount amount  %f",dis);
printf("\n\t\t\t===============================");
printf("\n\t\t\tNet paybal amount%f",net);
}
else
	printf("\nInvalied mrp found plz Enter agan:");
}
getch();
}