//hire//
#include<stdio.h>
#include<conio.h>
void main()
{
char htype,ctype;
int s=1;
float rate,dkm,charged;
clrscr();
printf("\nEnter Hire type As D(daywise)k(k.mwise):");
scanf("\n%c",&htype);
switch(htype)
{
case 'D':
case 'd':
	printf("\nEnter No Day:");
	scanf("\n%f",&dkm);
	if(dkm>0)
	{
		printf("\nEnter car type As A(Ambesdder)B(beloro)S(sumo):");
		scanf("\n%c",&ctype);
		switch(ctype)
		{
			case 'A':
			case 'a':
				rate=700.0;
				break;
			case 'B':
			case 'b':
				rate=800.0;
				break;
			case 'S':
			case 's':
				rate=900.0;
				break;
			default:
				printf("\nInvalied Car type found Enter agan:");
				      s=0;
			}
			break;
		   }
		   else{
		      printf("\nInvalied no of day found plz Enter agan:");
			      s=0;}
  case 'K':
  case 'k':
	printf("\nEnter No of Km:");
	scanf("\n%f",&dkm);
	if(dkm>0)
	{
		printf("\nEnter car type As A(Ambesdder)\B(beloro)\S(sumo):");
		scanf("\n%c",&ctype);
		switch(ctype)
		{
			case 'A':
			case 'a':
				rate=7.0;
				break;
			case 'B':
			case 'b':
				rate=8.0;
				break;
			case 'S':
			case 's':
				rate=9.0;
				break;
			default:
				printf("\nInvalied car typee found enter agan:");
					s=0;
		    }
		    break;
	 }
	 else{
		printf("\nInvalied no of KM found enter agan:");
			s=0;}
default:
	printf("\nInvalied hire type found Plz Enter agan:");
			s=0;
}
 if(s)
 {
 charged=dkm*rate;
 clrscr();
 printf("\n\t\t\t******************Bill Information*********************");
 printf("\n\t\t\tHire type As D(day wise)/k(k.m wise):       %c",htype);
 printf("\n\t\t\tCar type As A(Ambesdder)/B(beloro)/S(sumo): %c",ctype);
 printf("\n\t\t\tNo of Day/Km:                               %f",dkm);
 printf("\n\t\t\tRate charged Par Day/Par K.m:               %f",rate);
 printf("\n\t\t\t=======================================================");
 printf("\n\t\t\tCharged pay in Rs:                          %f",charged);
 }
 getch();
 }