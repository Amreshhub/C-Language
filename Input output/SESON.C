//season//
void main()
{
int mno;
clrscr();
printf("\n Enter no of month from 1 to 12:");
scanf("\n%d",&mno);
switch(mno)
{
case 11:
case 12:
case 1:
case 2:
	     printf("\nWinter seasion");
	     break;
case 3:
case 4:
case 5:
case 6:
	    printf("\nSummer seasion");
	    break;
case 7:
case 8:
case 9:
case 10:
	   printf("\nRaing seasion");
	    break;
default:
	   printf("\nInvalied no of month found:");
}
getch();
}
