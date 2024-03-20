/* Imp- If we are create a Union (User define data type ) then union take onlyone
highest momory allocate (it means in this Q. take double ) 
*/

#include<iostream>
using namespace std;

union geek{
	int age;
	double grade ;
	float GPA;
	
};
int main(){
	union geek student1;
   /*
   // yadi apan pure input sath mai leke baad main output print karwate hai to 
   // to ye only double ko print karega baki 0 print honge kyu union ak time main ak hi 
   // variable ko memory allocate karta hai
   
   	cin>>student1.age;
    cin>>student1.GPA;
    cin>>student1.grade;
	
	cout<<"Student Age is = "<<student1.age;
    cout<<"\nStudent GPA = "<<student1.GPA;
	cout<<" \n Student Grade is = "<<student1.grade;
   
   */
	cin>>student1.age;
	cout<<"Student Age is = "<<student1.age;
	cin>>student1.GPA;
	cout<<"\nStudent GPA = "<<student1.GPA;
	cin>>student1.grade;
	cout<<" \n Student Grade is = "<<student1.grade;
}
