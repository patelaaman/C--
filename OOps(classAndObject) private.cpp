/*
Object oriented  concept
=======================

c++ --> c{pop}  and c++ is a pop and oop  both are prograamming language

*/
#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll ,sem ,age;
	public:
		void setter(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"\nEnter Roll Numner ";
			cin>>roll;
			cout<<"\nEnter semeste r";
			cin>>sem;
			cout<<"\nEnter Age ";
			cin>>age;
		}
    void display(){
    	cout<<"\nRoll Num : "<<roll<<endl;
    	cout<<"Name "<<name<<" semester : "<<sem<<" Age : "<<age<<endl;
	}
};

int main(){
	Student s1 ,s2;
	s1.setter();
	s1.display();
}
