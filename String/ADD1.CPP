#include<iostreame.h>
#include<conio.h>
class addtion{
int a,b,c,add;
public:void input(){
cout<<"\nEnter any three number:";
cin>>a>>b>>c;
}
void sum(){
add=a+b+c;
}
void output(){
cout<<"\nSum Of Three number="<<add;
}
};
void main(){
clrscr();
addtion add1,*add2;
add2=&add1;
add2->input();
add2->sum();
add2->output();
getch();
}
