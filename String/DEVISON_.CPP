#include<iostream.h>
#include<conio.h>
class devison{
int a,b,div;
public:void input(){
cout<<"nEnter any two number:";
cin>>a>>b;
}
void deve(){
div=a/b;
}
void output(){
cout<<"\nDevison of Two number="<<div;
}
};
void main(){
clrscr();
devison x,*px;
px=&x;
px->input();
px->deve();
px->output();
getch();
}