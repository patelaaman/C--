#include<iostream>
using namespace std;

class Parent{
	
	void privatef(){
		cout<<"I am Private Member ";
	}
	
	public :
		void publicf(){
		cout<<"I am Public Member \n";
		privatef();
		protectedf();
	}
	protected:
		void protectedf(){
		cout<<"I am Protected Member ";
	}
};

class child: public Parent{
	 public: 
	 
	 void newf(){
		protectedf();
	}
};

int main(){
	Parent p1;
	p1.publicf();
	
	child c;
	c.publicf();
	
	c.newf();
	
}
