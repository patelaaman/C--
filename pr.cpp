#include<iostream>
using namespace std;
class RBI{
	 public :
	 	virtual void intrest(int a) =0;
};
class Axis:public RBI{
	  	public :
		virtual void intrest(int a){
			cout<<"Intrest rate is 10 %";
		} 
};
class SBI:public RBI{
	  	public :
		virtual void intrest(int a){
			cout<<"Intrest rate is 8.9 %";
		} 
};
class PNB:public RBI{
	  	public :
		virtual void intrest(int a){
			cout<<"Intrest rate is 9.7 %"<<a;
		} 
};
int main(){
	RBI *ptr;
	
	PNB s;
	ptr=&s;
	ptr->intrest(3);
	
}
