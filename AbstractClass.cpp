// Abstract Class

#include<iostream>
using namespace std;

class parentAbstractClass{
	public :
	virtual	void f1()=0 ; //  pure virtual function(decleare) 
	           //--> if you want to define abstract class then atleast make one pure virtual function
	           //and pure virtual function ko child class mai define karenge
	           // and we can't create the object of parent class
	           //inplementation only child class
	virtual void f2(int a)=0;  
	
	void f3(){
		cout<<"Here we dedine f3()";
	}
};
class childAbstractClass : public parentAbstractClass{
	public :
		virtual void f1(){
			cout<<"in child we define pure virtual function f1()";
		}  // definition /implimentation
// jitne bhi pure virtual function banate hai  must be implement in child class or call otherwise error

		virtual void f2(int a){
			cout<<"\nin child we define pure virtual function f2()";
			cout<<a;
		}
};


int main(){
//	parentAbstractClass p;

  childAbstractClass c1;
  c1.f1();
  c1.f2(23);
}
