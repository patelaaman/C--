#include<iostream>
using namespace std;

class Employee{
	 string name;
	 int eid;
	 double basic_salary; 
	public:
	    Employee(string n ,int id ,double sal ){
	    	name =n;
	    	eid = id;
	    	basic_salary = sal;
		}
		void display(){
			cout<<name<<" "<<eid<<" "<<basic_salary<<endl;
		}	
		friend  void Payment(Employee &a);  //friend function decleration
};

void Payment(Employee &obj){
			double s;
			cin>>s;
		    obj.basic_salary =s;
		}
int main(){
	Employee e("rajesh",101,29493.58);
	e.display();
	
	Payment(e);

	e.display();
}
