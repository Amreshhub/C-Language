#include<iostream.h>
#include<conio.h>
class addtion{
private:int a,b,add;
public: void input (){
cout<<"\nEnter two number";
cin>>a>>b;
}
void sum(){
add=a+b;
}
void display(){
cout<<"\nSum of two number:%d"<<add;
}
void main()
{
clrscr();
addtion x;
x.input;
x.sum;
x.display;
getch();
}
