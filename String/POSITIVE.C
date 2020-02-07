#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define size 200
void main()
{
int num[size],n,a,even=0,odd=0;
d1:clrscr();
printf("\nHow many number Do want to Enter:");
scanf("\n%d",&n);
if(n<=0||n>size)
{
	printf("\nMust Enter positive value and Number Enter Between 1 T0 %d",size);
	delay(3000);
	goto d1;
	}
for(a=0;a<n;a++)
{
	printf("\nEnter number %d::",a+1);
	scanf("\n%d",&num[a]);
	if(num[a]<=0)
	{
		printf("\nMust Enter positive value!try later:");
		a--;
		continue;
		}
	if(*(num+a)%2==0)
		even++;
	else
		odd++;
		}
printf("\nTotal count of Even=%d",even);
printf("\nTotal count of Odd=%d",odd);
getch();
}