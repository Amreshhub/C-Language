//Empolly sallery//
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
long int ecode;
float basic,da,hra,me=1500,gross,itax=0.0,netsal;
d1:clrscr();
	printf("\nEnter Empolye code:");
	scanf("\n%ld",&ecode);
	if(ecode<=0){
		printf("\nMust Enter Empolley code::invalid found plz Enter agan");
		delay(3000);
		goto d1;
		}
f1: printf("\nEnter Basci pay in Rs:");
scanf("\n%f",&basic);
	if(basic<=0){
	printf("\nMust Enter Basic pay::invalied found plz try agan::");
	delay(3000);
	goto f1;
	}
if(basic>5000)
	da=basic*20/100;
else
	da=basic*15/100;
if(basic>=10000)
	hra=basic*30/100;
else
	hra=basic*25/100;
gross=da+hra+me+basic;
if(gross>15000)
	itax=gross*12/100;
netsal=gross-itax;
clrscr();
	printf("\n\t\t===Salery Details===");
	printf("\n\t\tEmpolye code       :%ld",ecode);
	printf("\n\t\tBasic pay in Rs    : %f",basic);
	printf("\n\t\tDearness allwonce  :%f",da);
	printf("\n\t\tHouse rent allwonce:%f",hra);
	printf("\n\t\tMedical allwance   :%f",me);
	printf("\n\t\t======================");
	printf("\n\t\tGross sallery      :%f",gross);
	printf("\n\t\tIncome tax dedction:%f",itax);
	printf("\n\t\t======================");
	printf("\n\t\tNet sallery in Rs  :%f",netsal);
getch();
}