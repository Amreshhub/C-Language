#include<iostreame.h>
#include<conio.h>
struct evenodd{
private:int num,even,odd;
public:void input(){
cout<<"\nEnter any number";
cin>>num;
}
void m(){
even=0;
odd=0;
if(num%2==0)
even++;
else
odd++;
}
void output(){
cout<<"\nNumber is even="<<even;
cout<<"\nNumber is odd="<<odd;
}
};
void main(){
clrscr();
evenodd x,*px;
px=&x;
px->input();
px->m();
px->output();
getch();
}