#include<stdio.h>.
#include<conio.h>
void main(){
int a,even,odd;
for(a=2;a<=20;a=a+2)
{
	if(a%2==0)
		even++;
	else
		odd++;
printf("\nEven\n",even);
printf("\nOdd\n",odd);
}
printf("\nTotal count of even=%d",even);
printf("\nTotal count of odd=%d",odd);
getch();
}