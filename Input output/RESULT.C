void main()
{
 long int stureg;
 int a=3;
 int c,cpp,java,total;
 clrscr();
printf("\nEnter student regestrion no:");
scanf("\n%ld",&stureg);
if(stureg>0)
{
	printf("\nEnter Mrakes obtant in c:");
	scanf("\n%d",&c);
	if(c>0)
	{
		printf("\nEnter markas obtam in c++:");
		scanf("\n%d",&cpp);
		if(cpp>0)
		{
			printf("\nEnter markes obtam in JAVA:");
			scanf("\n%d",&java);
			if(java>0)
			{
			}else{
			printf("\nInvalied markas  Etery found Plz enter agan:");
			      a=0;}
		 }
		 else{
			printf("\nINvalied Markas Entery plz re Enter:");
				a=0;}

       }else{
		printf("\nInvalied Markas Entery Plz RE Enter:");
			a=0;}
}
else{
	printf("\nInvalied Student regerstrisotion number found Plz Re Enter:");
		a=0;}
if(a)
{
total=c+cpp+java;
printf("\n\t\t\t=====================================");
printf("\n\t\t\t\tMarkas Detaails");
printf("\n\t\t\t=====================================");
printf("\n\t\t\tRegistritraiton Number   ::  %ld",stureg);
printf("\n\t\t\tMarks Obtained in C      ::  %d",c);
printf("\n\t\t\tMarks obtained in cpp    ::  %d",cpp);
printf("\n\t\t\tMarks obtained in JAVA   ::  %d",java);
printf("\n\t\t\tResult Remarks           ::  %d",total);
if(c>=30)
	if(cpp>=30)
		if(java>=30)
			 printf("\n\t\t\tPass");
		else
			 printf("\n\t\t\t FAIL");
}
getch();
}