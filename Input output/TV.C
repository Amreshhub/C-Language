void main()
{
char type;
int a=1,size;
float mrp,rate,dis,paybal,vat,net;
clrscr();
printf("Enter tv type AS B(Black&white)/C(color):");
scanf("\n%c",&type);
switch(type)
{
	case 'B':
	case 'b':
		rate=20.0;
		break;
	case 'C':
	case 'c':
		printf("\nEnter tv size As14\"21\"");
		scanf("\n%d",&size);
		switch(size)
		{
			case '14':
			   rate=25.0;
			   break;
			case '21':
			rate=30.0;
			   break;
		       default:
			      printf("\nInvalied tv Size found plz Enter agan:");
					a=0;

		       }

	default:
		printf("\nInvalied  tv Type found Plz enter agan:");
		    a=0;
		    break;
		    }

if(a)
{
printf("\nEnter mrp in tv:");
scanf("\n%d",&mrp);
if(mrp>0)
{
  dis=mrp*rate/100;
  paybal=mrp-dis;
  vat=paybal*12.5/100;
  net=paybal+vat;
 clrscr();
printf("\t\t\t*****************Bill Information***************");
printf("\n\t\t\tTp type AS B(Black&white)/C(color):  %c",type);
printf("\n\t\t\tMrp in Rs:                           %f",mrp);
printf("\n\t\t\tDiscount rate:                       %f",rate);
if(type=='c'||type=='C')
printf("\n\t\t\tSize in tv %d\"",size);
printf("\n\t\t\tDiscount Amount In Rs:                %f",dis);
printf("\n\t\t\t===============================================");
printf("\n\t\t\tPaybal amount in Rs:                  %f",paybal);
printf("\n\t\t\tVat amount in Rs:                     %f",vat);
printf("\n\t\t\t=================================================");
printf("\n\t\t\tNet bill amount in Rs:                %f",net);
}
else
	printf("\nInvalied mrp found Plz Enter agan:");
}
getch();
}
