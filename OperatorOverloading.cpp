//Addition
#include <iostream>
using namespace std;
class Student{
	  int math , english,science;
	
	public :
		 
		Student(){
			math=0;
			english = 0;
			science= 0;
			
		}
		Student( int a ,int b ,int c){
		    math=a;
		    english =c;
		    science= b;
			
		}
		Student operator +(Student s){
		 	Student  temp;
			 temp.math = math + s.math;
			 temp.english =english + s.english;
			 temp.science = science + s.science;
			   return temp;	
			 	 	
		 }
		 void display(){
		 	cout<<"Maths value = "<<math;
		 	cout<<"\nEnglish value = "<<english;
		 	cout<<"\nScience value = "<<science;
		 }
		 
		 
};

int main(){
	Student s1(23,45,6), s2(23,5,2) ,s3(3,52,6),s4;
	s4 = s1+s2+s3;     // s1.operator +(s2)   s1 is hold the value of s2
	s4.display();
} 
