// String manuplation

// cstring                                    string_class_objects
//Array of character                         string class
//compile time                                Runtime 
// static                                     dynamically
// char name[10];                             
// size can't change                         sizere change
//  faster                                      slower


#include<iostream>
#include<string>
using namespace std;

int main(){
	string name ;
	cout<<"Enter name : ";
	// if we are use cin , new line samajhta hai  yadi space dete hai
	// cin--> space -- string termination 
	cin>>name;
	
  //  getline(cin,name);
//	cout<<name;
	
//  length() ,capacity() 

// new  20 character  -->shift to next bigger  location
// capacity >=length
 // cout<<name.length();
 // cout<<name.capacity();
  
  
  // push_back()  --> character mai char add karta hai
  // pop_back()   --> character mai char delete karta hai
  
 // name.push_back('a');
 name.pop_back();
 // name.pop_back();
  // name.pop_back();
   cout<<name;
  
  
  // two string ko jodne ke liye  append() and + dono ka use kar sakte hai
  
 /* string msg = "Apple";
  string s = " is good";
  string s1 = msg + s;
  cout<<s1;*/
  
  // at(2) function
  // resize(2) 
  // a.  compare(b)
}
