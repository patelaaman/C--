#include <iostream>
using namespace std;

void fullname(string nm, string sur){
	string fullN = nm + " "+ sur;
	cout<<fullN<<endl;
}

int main(){
	string first_name,Last_name ; //actual Parameter
	cout<<"Enter Your Name";
	cin>>first_name;
	cout<<"Enter Your Surname:";
	cin>>Last_name;
	fullname(first_name,Last_name);
	fullname("Rohit","panday");
}
