//Wap to create o

#include<iostream>
using namespace std;

class Cybrom;

class Cybrom{
	  int enroll;
	public:
		static int count_object;
		static string address;
		
		Cybrom(){
			count_object++;
		}
		static void f2(){
			cout<<"this is aother static fuction";
		}
		static void display(){
		        // cout<<enroll;
			cout<<count_object;
		    cout<<address;
		    
		}
};

static void f1(){
	cout<<"\nthis is global static function";
         Cybrom::f2();
}


int Cybrom::count_object = 0;
string Cybrom::address ="Bhopal";

int main(){
	Cybrom c1,c2,c3;
	cout<<Cybrom::count_object;
	c1.display();
	f1();
}
