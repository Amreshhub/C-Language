#include<iostream.h>
#include<conio.h>
class addtion {
private: int a,b,add;
public : void input(){
cout<<"\nEnter tow number";
cin>>a>>b;
}
void sum(){
add=a+b;
}
void output(){
cout<<"\nSum of Two number="<<add;
}
};
void main(){
clrscr();
addtion x;
x.input();
x.sum();
x.output();
getch();
}