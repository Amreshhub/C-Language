//sallery//
void main()
{
long int ecode;
int a=2;
float basic,da,hra,ma=1500.0,gross,itax=0.0,net;
clrscr();
printf("\nEnter Empollye code:");
scanf("\n%ld",&ecode);
if(ecode>0)
{
	printf("\nEnter Basic pay in Rs:");
	scanf("\n%f",&basic);
	if(basic>0)
	{
		if(basic>5000)
		   da=basic*20/100;
		else
		  da=basic*15/100;
		if(basic>=10000)
			hra=basic*30/100;
		else
			hra=basic*25/100;
	  }
	  else{
		printf("\nInvalied basic pay found plz Enter agan:");
		      a=0;}
}
else{
	printf("\nInvalied empolloy code found:");
	      a=0;}
if(a)
{
gross=basic+da+hra+ma;
if(gross>15000)
itax=gross*12/100;
net=gross-itax;
clrscr();
printf("\n\t\t\t********Bill Information***********");
printf("\n\t\t\tEmpolyee code:         %ld",ecode);
printf("\n\t\t\tBasic pay in Rs:       %f",basic);
printf("\n\t\t\tDearnees allowance:    %f",da);
printf("\n\t\t\tHouse rante:           %f",hra);
printf("\n\t\t\tMedical allowance:     %f",ma);
printf("\n\t\t\t===================================");
printf("\n\t\t\tGross total in Rs:     %f",gross);
printf("\n\t\t\tIncome tax dedaction : %f",itax);
printf("\n\t\t\t====================================");
printf("\n\t\t\tNet sallery in Rs:     %f",net);
}
getch();
}