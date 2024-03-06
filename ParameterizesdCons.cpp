#include<iostream>
using namespace std;
class Student{
	private: 
	    	string name;
		int roll ,sem ,age;	
	
		public :
		
		Student(string n , int r ,int s ,int a){   //Parameteresized constructer
			name = n;
			roll = r;
			sem = s;
			age = a;
			cout<<"Object created with Parameterized  values \n ";
		}
		
		void display(){
			cout<<" Roll = "<<roll<<" name = "<<name<<" Age = "<<age<<" Semester = "<<sem;
		}
};


int main(){
/*	Student s1("aman",201,7,23) ;
	s1.display();
	*/
	Student s1("aman");
	s1.display();
}
