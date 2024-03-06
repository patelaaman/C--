#include<iostream>
using namespace std;

int main(){
	double ClassesHeld, ClassesAttend;
	cout<<"Please Enter Number of Classes Held ";
	cin>>ClassesHeld;
	
	cout<<"Please Enter Number of Classses Attended ";
	cin>>ClassesAttend;
	
	double Attendence_persentage  = (ClassesAttend/ClassesHeld)*100;
	
	
	if(Attendence_persentage>75){
	  
	  cout<<"Yes, You are allow To sit For Exam \n";
	  cout<<"Your Attendence persentage = "<<Attendence_persentage<<"%";
	}
	else{
		 cout<<"No, You are Not allow To sit For Exam\n";
		 cout<<"Your Attendence persentage = "<<Attendence_persentage<<"%";
	}
}
