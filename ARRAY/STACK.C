//implimant stack using single link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct stack
{
	int data;
     struct stack *next;
     }*top;
typedef struct stack stack;
//Function PUSH() to push data at stack
	void push(int d){
	stack *s;
  s=(stack*)malloc(sizeof(stack));
  s->data=d;
  if(top==NULL)
  top=s;
  else
  s->next=top;
  top=s;
 }//close of push function
//function to pop()to popped data at the stack
	void pop(){
	stack *tmp;
	int v;
if(top==NULL)
	printf("\nStack is empty");
else {
tmp=top;
v=tmp->data;
	printf("\npopped data element is=%d",v);
top=top->next;
free(tmp);}
}//close of function
void main(){
int choice;
int data;
clrscr();
for(;;)
{
	clrscr();
	printf("\n\t***************stack******************");
	printf("\n\tPrass<1>to push data at the stack:");
	printf("\n\tPress<2>to	popped data at the stack:");
	printf("\n\tPress<3>to exit application");
	printf("\n\t**************************************");
printf("\nEnter menu option:-");
scanf("\n%d",&choice);
switch(choice)
{
//case 'a':
//case 'A':
case 1:printf("\nEnter data to be store at the stack:-");
	  scanf("\n%d",&data);
	  push(data);
	  break;
//case 'p':
//case 'P':
case 2:pop();
	 delay(2000);
	 getch();
	 break;
//case 'E':
case 3:printf( "\nexit application...............!");
       delay(3000);
       exit(3);
       break;

default:printf("\nInvalied menu option found !plz enter agan");
	 delay(2000);
}//close of switch
}
//while(choice=='e'&&choice=='E');
}//close of main

