void main()
{
int p;
clrscr();
printf("\nEnter Packege AS 1/2:");
scanf("\n%d",&p);  clrscr();
switch(p)
{
case 1:
	printf("\nDestination in Bodhgaya 3000Rs.");
	break;
case 2:
	printf("\nDestination in Nalanda 2500Rs.\n\t\tRajgir2000Rs.");
	break;
default:
	printf("\nInvalied Packege Type found Plz Enter agan:");

}
getch();
}
