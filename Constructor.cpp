//Constructor ::
//    To initialized the value of all data member , is called a constructor
/*    
    Type of  Constructor
1 Default 
2 Parameterize
3 copy

Feature
      a) It is a special  member Function.
      b) name same as the name of class.
      c) It  can't  return any value hence we don't mention a
         any return value of this special  member f();
      d) Constructer  calling implicit(automatically)
	     Whenever object is created constructer get called.   
*/

#include<iostream>
using namespace std;
class Student{
	private: 
	    	string name;
		int roll ,sem ,age;
		
	/*	Student(){         // Default Constructor
			name = "Aman";
			roll= 201;
			sem = 5;
			age =23;
			cout<<"Object Created with above value ";
		}
		*/
		public :
		 Student(){
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
			cout<<" Roll = "<<roll<<" name = "<<name<<" Age = "<<age<<" Semester = "<<sem;
		}
};


int main(){
	Student s1 ,s2;
	s1.display();
}
