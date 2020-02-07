void main()
{
long int artno;
int a=9;
char cname;
float mrp,rate,dis,pay,vat,net;
clrscr();
textcolor(5);
printf("\nEnter Artical no:");
scanf("\n%ld",&artno);
if(artno>0)
{
	printf("\nEnter compenay name As A(Action)\L(Liberity)/W(Woodland?");
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
		printf("\nInvalied Compeniey name found Enter agan:");
			a=0;}
}else{
	printf("\nInvalied Artical no found Plz enter agan::");
			a=0;}
if(a)
{
printf("\nEnter Mrp of the given footware:");
scanf("\n%f",&mrp);
if(mrp>0)
{
dis=mrp*rate/100;
pay=mrp-dis;
vat=pay*12.5/100;
net=pay+vat;
clrscr();
printf("\t\t\t**************Bill Information*****************");
printf("\n\t\t\tArtical no As A(Action)/L(Liberity)/W(Woodland):%ld",artno);
printf("\n\t\t\tMrp in Rs:                                      %f",mrp);
printf("\n\t\t\tDiscount rate:                                  %f%%",rate);
printf("\n\t\t\tDiscount amount in Rs:                          %f",dis);
printf("\n\t\t\t===============================================");
printf("\n\t\t\tPyybal amount in rs:                            %f",pay);
printf("\n\t\t\t12.5%%vat in Rs:                                %f",vat);
printf("\n\t\t\t===============================================");
printf("\n\t\t\tNet bill amount in Rs:                          %f",net);
}
else
	printf("\nInvalied mrp found Plz Enter agan:");
}
getch();
}
