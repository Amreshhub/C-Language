void main()
{
float basic,da,hra,gross;
int a=3;
clrscr();
printf("Enter basic salrey:");
scanf("\n%f",&basic);
if(basic>0)
{
	da=basic*40.0/100;
	hra=basic*20/100;
}
else{
	printf("\nInvalied Basic salery found Plz Enter agan:");
		a=0;}
if(a)
{
gross=basic+da+hra;
clrscr();
printf("\n\t\t\t********Salery Detials***************");
printf("\n\t\t\tBasic sallery in Rs:  %f",basic);
printf("\n\t\t\tDearnass allowance :  %f",da);
printf("\n\t\t\tHouse rant Allowance: %f",hra);
printf("\n\t\t\t======================================");
printf("\n\t\t\tGross Salery amount : %f",gross);
}
getch();
}
