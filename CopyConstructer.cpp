#include<iostream>
using namespace std;
class Person{
	 string name;
	 int age;
	 public:
	 	Person(){
	 		cout<<"Enter Name  and Age :";
	 		cin>>name>>age;
		 }
		Person(string n,int a){
			name =n;
			age =a;
			cout<<"parameterize Constructer \n";
		}
		Person(Person &obj){   //copy constructer --> reference
			name= obj.name;
			age = obj.age;
			cout<<"copy constructer \n";
		}
		
		void change(int nm){
			name =nm;
		}
		void display(){
			cout<<"Your name is"<<name<<" "<<age<<endl;
		}
}; //  Implecitly compiler create a copy constructer

int main(){
	Person p("aman",23);

	Person p1=p; //   p1(p)
//	p.display();
//	p1.display();
	Person p2(p);
//	p2.display();
}
