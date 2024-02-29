#include<iostream>

using namespace std;
template<class Type>
#define SIZE 5

class stack{
Type a[SIZE];
int TOP;
public:
stack(){
TOP=-1;
}
void push(){
if(TOP>=4){
cout<<"stack is overflow"<<endl;
return;
}
TOP++;
cout<<"enter the push"<<endl;
cin>>a[TOP];
}
void pop(){
if(TOP<0){
cout<<"stack is underflow"<<endl;
return;
}
cout<<"deleted num"<<a[TOP]<<endl;
TOP--;
}
void display_stack(){
if(TOP<0){
cout<<"stack is empty"<<endl;
return;
}
for(int i=0;i<=TOP;i++){
cout<<a[i]<<endl;
}
}
void reset(){
TOP=-1;
}
};

stack<int>a1;
stack<char>c1;
stack<float>f1;
stack<double>d1;
stack<string>s1;

int main(){
int op;
int flag=0,flagi=0,flagc=0,flagf=0,flagd=0,flags=0;
l1:
cout<<"enter your choice"<<endl;
cout<<"1.int 2.char 3.float 4.double 5.string 6.exit"<<endl;
cin>>op;
switch(op){
case 1:
       {
	       if(flagi==1){
		       cout<<"1.old_stack 2.new_stack"<<endl;
		       cin>>op;
		       if(op==2){
			       a1.reset();
		       }
	           flagi=0;
	       }
       while(1){
	       cout<<"1.push 2.pop 3.display_stack 4.main_menu"<<endl;
	       cin>>op;
	       switch(op){
		       case 1:a1.push();break;
		       case 2:a1.pop();break;
		       case 3:a1.display_stack();break;
		       case 4:{flagi=1;goto l1;}break;
	       }
       }
       }
       break;

case 2:
       {
	       if(flagc==1){
		       cout<<"1.old_stack 2.new_stack"<<endl;
		       cin>>op;
		       if(op==2){
			       c1.reset();
		       }
	           flagc=0;
	       }
       while(1){
	       cout<<"1.push 2.pop 3.display_stack 4.main_menu"<<endl;
	       cin>>op;
	       switch(op){
		       case 1:c1.push();break;
		       case 2:c1.pop();break;
		       case 3:c1.display_stack();break;
		       case 4:{flagc=1;goto l1;}break;
	       }
       }
       }
       break;

case 3:
       {
	       if(flagf==1){
		       cout<<"1.old_stack 2.new_stack"<<endl;
		       cin>>op;
		       if(op==2){
			       f1.reset();
		       }
	           flagf=0;
	       }
       while(1){
	       cout<<"1.push 2.pop 3.display_stack 4.main_menu"<<endl;
	       cin>>op;
	       switch(op){
		       case 1:f1.push();break;
		       case 2:f1.pop();break;
		       case 3:f1.display_stack();break;
		       case 4:{flagf=1;goto l1;}break;
	       }
       }
       }
       break;

case 4:
       {
	       if(flagd==1){
		       cout<<"1.old_stack 2.new_stack"<<endl;
		       cin>>op;
		       if(op==2){
			       d1.reset();
		       }
	           flagd=0;
	       }
       while(1){
	       cout<<"1.push 2.pop 3.display_stack 4.main_menu"<<endl;
	       cin>>op;
	       switch(op){
		       case 1:d1.push();break;
		       case 2:d1.pop();break;
		       case 3:d1.display_stack();break;
		       case 4:{flagd=1;goto l1;}break;
	       }
       }
       }
       break;

case 5:
       {
	       if(flags==1){
		       cout<<"1.old_stack 2.new_stack"<<endl;
		       cin>>op;
		       if(op==2){
			       s1.reset();
		       }
	           flags=0;
	       }
       while(1){
	       cout<<"1.push 2.pop 3.display_stack 4.main_menu"<<endl;
	       cin>>op;
	       switch(op){
		       case 1:s1.push();break;
		       case 2:s1.pop();break;
		       case 3:s1.display_stack();break;
		       case 4:{flags=1;goto l1;}break;
	       }
       }
       }
       break;
       
case 6: exit(0);
}
}
