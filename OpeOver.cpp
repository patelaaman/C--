// Subtraction
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
		Student operator -(Student s){
		 	Student  temp;
			 temp.math = math - s.math;
			 temp.english =english - s.english;
			 temp.science = science - s.science;
			    if((math&&s.math)>=-100){
				
			      if(math<s.math)
			         cout<<"\n\nMath Lower Number is = "<<math;
			      else
			          cout<<"\nMath Lower Number is = "<<s.math;
			    }
			     if((english&& s.english)>=-100){
				
			       if(english<s.english)
			         cout<<"\nEnglish Lower Number is = "<<english;
			      else
			          cout<<"\nEnglish Lower Number is = "<<s.english;
			    }
			     if((science&&s.science)>=-100){
				
			      if(science<s.science)
			         cout<<"\nScience Lower Number is = "<<science<<endl;
			      else
			          cout<<"\nScience Lower Number is = "<<s.science;
			    }
			   return temp;	
			 	 	
		 }
		 void display(){
		 	cout<<"\n\nMaths value = "<<math;
		 	cout<<"\nEnglish value = "<<english;
		 	cout<<"\nScience value = "<<science;
		 }
		 
		 
};

int main(){
	Student s1(50,45,6), s2(23,4,1) ,s3(3,2,6),s4;
	s4 = s1-s2-s3;     // s1.operator +(s2)   s1 is hold the value of s2
	s4.display();
} 
