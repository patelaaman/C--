// Structure - self  Reference  Structure
//  --------------------------------------

// pointer is a derived Data type 
// Structter is a user define data type

//  int ,char , double ,string  --> primitive 
//  arrays ,pointers            --> derived
//  Structure ,class --> user define data type

/*  struct Structuture_name {
	 
	    define structure  
	    data member  + member + f();
  }; */


/*
 difference between class and structure 
 
 class --> OOPs  --> logic implement 
 structure --> no 
 */
 
 // structure ke variable banta hai classs ki tarah object nahi banate hai
 
 
// Wap to create a structure named  Employee create some Instance or variable of it..

#include<iostream>
using namespace std;

struct Employee{
	int eid;
	char ename[20];
	double salary;
};


int main(){
	Employee e1,e2,e3 ,*p;
	cout<<"Enter Employee Id :"<<endl;
	cin>>e1.eid;
	cout<<"Enter Employee Name :"<<endl;
	cin>>e1.ename;
	cout<<"Enter Employee Salary : "<<endl;
	cin>>e1.salary;
	
	cout<<"Your Employee Id : ";
	cout<<e1.eid;
	cout<<"\nYour Employee Name :";
	cout<<e1.ename;
	cout<<"\nYour Employee Salary :";
	cout<<e1.salary;
	
	p = &e1;
	
	cout<<"Your Employee Id :"<<endl;
	cout<<p->eid;
	cout<<"\nYour Employee Name :";
	cout<<p->ename;
	cout<<"\nYour Employee Salary :";
	cout<<p->salary;
	
}

Union  And Array of structure 
 
