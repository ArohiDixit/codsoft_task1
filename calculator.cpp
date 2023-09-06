#include<iostream>
using namespace std;
class Calc{
	public:
		float a,b;
		
		void get(){
			cout<<"Enter two space seperated values:"<<endl;
			cin>>a>>b;	
		}
		void add(){
			cout<<"Addition:"<<a+b<<endl;
		}
		void sub(){
			cout<<"Subtraction:"<<a-b<<endl;
		}
		void mul(){
			cout<<"Multiplication:"<<a*b<<endl;
		}
		void div(){
			cout<<"Division:"<<a/b<<endl;
		}
};
int main(){
	char o;
	Calc c;
	c.get();
	cout<<"Enter the operation sign:"<<endl;
	cin>>o;
	switch(o){
		case'+':
			c.add();
			break;
		case'-':
			c.sub();
			break;
		case'*':
			c.mul();
			break;
		case'/':
			c.div();
			break;
		
		default:
				cout<<"Invalid operation ";
	}
	
	
}
