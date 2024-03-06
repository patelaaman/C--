//distructor
#include<iostream>
using namespace std;
class A{
	public :
		A(){
			cout<<"Initialized variable ,mmemory alocation\n";
		}
		~A(){
			cout<<"Object memory raleased \n";
		}
};

int main(){
	A obj1;
	
	if(1){
		cout<<"inside if\n";
		A obj2;
		
	}
	
	cout<<"outside if\n";
	cout<<"Obj 2 memory release  -->out of scope";
}
