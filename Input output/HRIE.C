void main()
{
char htype,ctype;
int a=1;
float dkm,rate,charged;
clrscr();
printf("\nEnter hire type D(daywise)/k(km):");
scanf("\n%c",&htype);
if(htype=='D'||htype=='d')
{
	printf("\nEnter no of day:");
	scanf("\n%f",&dkm);
	if(dkm>0)
	{
		printf("\nEnter car type A(ambesdder)/b(beloro)/s(sumo):");
		scanf("\n%c",&ctype);
		if(ctype=='A'||ctype=='a')
		  rate=700.0;
		else
		if(ctype=='B'||ctype=='b')
		  rate=800.0;
		else
		if(ctype=='S'||ctype=='s')
		  rate=900.0;
		else{
		printf("\nInvalied car type found Enter agan:");
		      a=0;}
	  }
	  else{
	   printf("\nInvalied no of day found Enter agan:");
		   a=0;}

}
else
if(htype=='K'||htype=='k')
{
	printf("\nEnter no of km:");
	scanf("\n%d",&dkm);
	if(dkm>0)
	{
		printf("\nEnter car type As A(ambesdder)/B(beloro)/S(sumo):");
		scanf("\n%c",&ctype);
		if(ctype=='A'||ctype=='a')
		 rate=7.0;
		else
		if(ctype=='B'||ctype=='b')
		rate=8.0;
		else
		if(ctype=='S'||ctype=='s')
		rate=9.0;
		else{
		printf("\nInvalied car type found Enter agan:");
		    a=0;}
	}
	else{
	printf("\nInvalied no of km found Enter agan");
	    a=0;}
}
else{
printf("\nInvalied hire type found plz entr agan:");
    a=0;}
if(a)
{
charged=dkm*rate;
clrscr();
printf("\n\t\t\t******************bill********************************");
printf("\n\t\t\tHire type as D(daywise)/K(km):             %c",htype);
printf("\n\t\t\tCar type As A(ambesdeer)/B(beloro)/s(sumo):%c",ctype);
printf("\n\t\t\tNo of Day/No of Km:                        %f",dkm);
printf("\n\t\t\tRate Charged PerDay/PerKm:                 %f",rate);
printf("\n\t\t\t======================================================");
printf("\n\t\t\tCharged to be pay in Rs:                   %f",charged);
}
getch();
}
