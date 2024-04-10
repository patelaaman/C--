#include<iostream>
using namespace std;

class MusicAcademy{
	private :
		int enroll;
		string name;
		string style;
		float fee;
		void chefee(){
			if(style == "Classical")
			    fee = 10000;
			else if(style == "Western")
			    fee = 8000;
			else if(style == "Freestyle")
			  fee = 11000;
		}
	public :
		void enrollment(){
			cout<<"Enter enroll: ";
			cin>>enroll;
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nEnter style Classical or Western or  Freestyle : ";
			cin>>style;
			chefee();
			
		}
		void display(){
			cout<<"Your enroll: ";
			cout<<enroll;
			cout<<"\nYour name: ";
			cout<<name;
			cout<<"\nYour style : ";
			cout<<style;
			cout<<"\n your fees is :";
			cout<<fee;
		}
		
	friend class ExammusicAccademy;
	
};

class ExammusicAccademy{
	public : 
	 void showExam(MusicAcademy &M){
	 	if(M.style == "Classical")
	 	   cout<<"Exam is on Will be on December ";
	 	else if(M.style == "Western")
	 		cout<<"Exam is on will be on november ";
	 	else if(M.style == "Freestyle")
	 	   cout<<"Exam on February";
		 }
	 
};
int main(){
	MusicAcademy m;
	m.enrollment();
	m.display();
	ExammusicAccademy e;
	e.showExam(m);
}
//freind class is access private and protected member


