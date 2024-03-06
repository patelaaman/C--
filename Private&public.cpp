/* #include<iostream>
using namespace std;

class Student{
	 string name;   // by deafaut private
	 public :
	 	Student(string nm){    //Para. con
	 		name =nm;
		 }
		 display(){
		 	cout<<"My name is "<<name;
		 }
};

int main(){
	Student s1;
	// Note  : constructor parametirized ,calling default error
	s1.name = "aman";   //Directly not access private  
}
*/



#include<iostream>
using namespace std;

// To Take  access of private member , we must dafine a  member f() in  public ,Where we caaan take  access of private  member 


 class Student{
 	/*private:
 		string name;*/
 	protected: 
 	   String name;
 	
 	public :
 		Student(string nm){
 			name=nm;
		 }
    void display(){
    	cout<<"My name is "<<name;
    	
	}
	void change_name(string new_name){
		name = new_name;
	}
		 }
 };
 
 int main(){
     Student s1("Ajay");
     s1.display();
     s1.change_name("Aman")
	 s1.display();
 }
