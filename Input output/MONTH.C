//crosponding//
void main()
{
int mno;
clrscr();
printf("\nEnter month no from 1 To 12:");
scanf("\n%d",&mno);
switch(mno)
{
case 1:
	printf("\n January");
	 break;
case 2:
	printf("\n februray");
	 break;
case 3:
	printf("\n march");
	 break;
case 4:
	printf("\nAprial");
	 break;
case 5:
	printf("\nMay");
	break;
case 6:
       printf("\njune");
	break;
case 7:
      printf("\njulay");
	break;
case 8:
      printf("\nAuguast");
	 break;
case 9:
      printf("\nSepetmber");
	 break;
case 10:
      printf("\nOctomber");
	break;
case 11:
      printf("\Nomvember");
	break;
case 12:
       printf("\nDecember");
default:
       printf("\nInvalied no of month found:");

}
getch();
}

