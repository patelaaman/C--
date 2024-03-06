#include<iostream>
using namespace std;

class A {
	public :
		virtual void f1(){
			cout<<"Function of class a ";
		}
};
class B : public A{
	public :
	     void f1(){
			cout<<"Function of class b ";
		}
};
class C :public B{
	public :
		void f1(){
			cout<<"Function of class c ";
		}
};


int main(){
	A *ptr_a ,a;
	B b;
	C c;
	
	ptr_a= &a;
	ptr_a ->f1();
	
	
	ptr_a= &b;
	ptr_a ->f1();
	
	
	ptr_a =&c;  
	ptr_a ->f1();
}
