#include<iostream.h>
#include<conio.h>
class evenodd{
int even,odd,a,n,num;
public:void input(){
cout<<"How many number do you Want to Enter:";
cin>>%d>>n;
for(a=1;a<=n;a++)
{
       s1:cout<<"\nEnter number %d:",a;
	cin>>%d>>num;
	if(num<=0)
	{
		cout<<"\nMust enter Positive value:";
		delay(3000);
		goto s1;
		}
void m(){
even=0;
odd=0;
if(num%2==0)
even++;
else
odd++;
}
}
void display(){
cout<<"\nTotal number of even=%d"<<even;
count<<"\nTotal numberof odd=%d"<<odd;
}
};
void main(){
clrscr();
evenodd b;
b.input();
b.m();
b.display();
getch();
}
