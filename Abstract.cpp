#include<iostream>
using namespace std;

class Person {
	public:
	string name;
	int age;
	  public :
	  /*	void setter(string n, int a){
	  		name = n;
	  		age = a;
		  }
		  */
		Person(string n, int a){
			name = n; 
	  		age = a;
	  		cout<<"Parameterise";
		}
		Person(){
			name = "aman";
			age = 34;
			cout<<"Default";
		}
		void getter(){
			cout<<name<<age;
			
		}
	
};
class Employee: public Person{
	// calling of parent constructer
	private :
		int eid, esal;
	public :
		Employee(string n , int a, int id, int sal):Person(n,a){
			eid = id ;
			esal = sal;
			
		}
		
		void getter(){
			cout<<name<<endl<<age<<endl;
			cout<<esal<<endl<<eid;
		}
};

int main(){
	Employee  e("amab",3234 ,24,53);
	e.getter();   // Function overriding  (Run time polymorfhisim)
	
     
	
}


