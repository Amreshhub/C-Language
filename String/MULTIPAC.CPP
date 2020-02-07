#include<iostream.h>
#include<conio.h>
class multipaction{
int a,b,mult;
public: void input(){
cout<<"\nEnter Any Tow Number";
cin>>a>>b;
}
void multe(){
mult=a*b;
}
void output(){
cout<<"\n Multipaction of tow number="<<mult;
}
};
void main(){
clrscr();
multipaction x, *px;
px=&x;
px->input();
px->multe();
px->output();
getch();
}
