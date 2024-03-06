#include <iostream>
using namespace std;
int main(){
	int a = 23,b;
	b=++a;  // increment the value of a ny 1 then assign i to b
	cout<<"A = "<<a;// << insertion operator
	cout<<" B = "<<b;
	
	cout<<"A= "<<a<<" B= "<<b;  //cascading of insertion Operator
	
	//Taking Input
	int c ,d;
	
	cout<<"\nEnter the value of c : ";
	cin>>c;     // >> Extraction operator
	cout<<"\nEnter the value of d : ";
	cin>>d;  
	cout<<"C= "<<c<<" D = "<<d;
	
	cout<<"\nEnter the value of c and d : ";
	cin>>c>>d;    //cascading of Extration  Operator
}


