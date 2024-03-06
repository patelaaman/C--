//  wap to create a class named student.
// data_member --> name ,age , sem_year
//member f();  -- display(),increment_sem()
#include<iostream>
using namespace std;

class Student{
	 public :
	 	string name;
	 	int roll ,age, sem;
	 
	void display(){
	 	cout<<"Name : "<<name<<"\nRoll Num: "<<roll<<"\nAge :"<<age<<" \n Semester : "<<sem;
	 	
	 }
	 	
};

int main(){
	   Student s1;
	   s1.name= "Aman";
	   s1.roll= 201;
	   s1.sem= 7;
	   s1.age = 24;
	   s1.display();
}
