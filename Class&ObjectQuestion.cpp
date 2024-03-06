// 1>WAP to create a class  Book .
// #data member: int Bid,Quantity;
// #member function: parameterized_constructor(),void Purchase() 
// ,void Sale(), void currentstock().
// # first user intitailized data members with input values.
// # purchase can add books quantity
// # sale can decremented books quantity.

/*

#include<iostream>
using namespace std;

class Book{
	int bid,quantity;
	
	public :
		Book(int b,int q){
			bid = b;
			quantity = q;
		}
	
	void purchase(){
		int number;
		cout<<"How many more piece do u want purchesh";
		cin>>number;
		quantity=quantity+ number;
		
	}
	void sale(){
		int number;
		cout<<"How many piece do u want sale";
		cin>>number;
	    quantity=quantity-number;
	
	}
	void currentstock(){
		cout<<"Book Id "<<bid<<"\n Quantity = "<<quantity<<endl;
	}
};

int main(){
	Book b(1,23);
	b.purchase();
	b.sale();
	b.currentstock();
}
*/



//2>Write a class named Circle constructed by a radius and 
//two methods which will compute the area and the perimeter of a circle.
//
//#data member: double radius.
//#member function: parameterized_constructor(),void area() ,void perimeter(), void display().

/*
#include<iostream>
using namespace std;
class Circle{
	double radius;
	public :
		Circle(double rad){
			radius = rad;
		}
		
		double Area(){
			double pi = 3.14;
          return pi*radius*radius;
			
		}
		double perimeter(){
			double pi = 3.14;
			return 2*pi*radius;
		}
		void display(){
			cout<<"Radius of the circle : "<<radius;
			cout<<"\nArea OF circle is : "<<Area();
			cout<<"\nParameter of circle is : "<<perimeter();
		}
};

int main(){
	Circle c1(4);
	c1.display();
}
*/



//3)Write a  class named animal constructed by a name, no_legs, category
//(herbivores, carnivores and omnivores)and
//
//#private data member: name(string type),no_legs (int type),category(string type) (herbivores, carnivores and omnivores)
//detail(string type)
//
//private member function:
//    void set_detail()
//description:
// 1)herbivores -> "animals that eat plants"
// 2)carnivores -> "animals that eat only meat"
// 3)omnivores -> "animals eat both plants and meat"
//  
//public 
//#member function: parameterized_constructor(name,legs,category)
//                  and call set_detail() inside it.
//                  all_details() -->display all
//                  category () -->display category
//Create some objects and display result.

/*
#include<iostream>
using namespace std;

class Animal{
	private :
		string name , category , details;
		int no_of_legs;
		
		void set_details(){
			if(category == "carnivores")
			   details = "animals that can eat only  meat";
			else if(category == "omnivores")
			   details = "animals that can eat both plants and meat";
			else if(category == "herbivoras")
			   details = "animals that can eat only plants"; 
		}
	public :
	   Animal(string n, int a ,string cat){
	   	    name = n;
			category =cat;
		    no_of_legs = a;
		    set_details();
	   }	
	void ALL_details(){
		cout<<"Name : "<<name<<"\n Number of Legs :"<<no_of_legs;
		cout<<"\nCategory : "<<category;
	    cout<<"\n Details : "<<details;
	}
};

int main(){
	Animal a("Tiger",4,"carnivores");
	a.ALL_details();
}
*/


//4>WAP to create a class  Resume .
//#data member: string name,double percentage10,double percentage12,double percentagedegree,bool currentlyworking,
//#member function: parameterized_constructor(),void update_percent() ,void update_name(), void display().

/*
#include<iostream>
using namespace std;

class Resume{
	string name;
	double percentage10,percentage12, percentagedegree;
	bool currentWorking;
	
	public:
		Resume(string n,double per10,double per12,double perdeg, bool curWor){
		 name	=n;
		 percentage10=per10;
		 percentage12 =per12;
		 percentagedegree=perdeg;
		 currentWorking= curWor;
		}
		
		void update_percent(){
			bool p10, p12, pdeg;
			  percentage10 = p10;
			  cout<<"\n Please Enter 10th per% for the Updatation : ";
			  cin>>percentage10;
			  
			  percentage12 = p12;
			  cout<<"\n Please Enter 12th per% for the Updatation : ";
			  cin>>percentage12;
			  
			  percentagedegree =pdeg;
			  cout<<"\n Please Enter 10th per% for the Updatation : ";
			  cin>>percentagedegree;
		} 
		void update_name(){
			string na;
			name =na;
			cout<<"\n Please Enter For the Update name :";
			cin>>name;
			
		}
		void display(){
			cout<<" Your Name is : "<<name;
		    cout<<"\n Your percentage in 10 : "<<percentage10;
		    cout<<"\nyour percentage12 in : "<<percentage12;
		    cout<<"\nYour percentage Degree is :"<<percentagedegree;
		    cout<<"\nYour Current working is : "<<currentWorking<<endl;
		}
};

int main(){
	 Resume r1("Aman",87,82,8.2,"Yes");
	 r1.display();
	 r1.update_percent();
	 cout<<"\nAfter Percentage Updatation \n";
	 r1.display();
	 r1.update_name();
	 cout<<"\n After Name Updation \n";
	 r1.display();
}
*/

//5)WAP to create a class  Student . that accepts marks (out of 100)
// of five subjects from user and calculate the 
//#private data member: 5 int variable, 1 double variable percentage,
// 1 char variable Grade,student_name.
//calculate_grade()
//percentage >=60 Grade A
//percentage >=50 Grade B
//percentage >=40 Grade C
//percentage  <40 Grade D
//calculate_per()
//#member function: constructor()-->5 marks+calculate_per(),display_grade()

/*
#include<iostream>
using namespace std;
class Student{
	private :
		int a,b,c,d,e;
		double percentage;
		string name;
		char grades ;
	public :
//		Student(int A, int B,int C, int D, int E, double per ,string n,char g){
//			a =A;
//			b = B;
//			c = C ;
//			d = D;
//			e = E;
//			percentage = per;
//			name = n;
//			grade = g;
//		}
		void inputmark(){
			cout<<"\n Please Enter First Subject Number out of 100 (A)";
			cin>>a;
			cout<<"\nPlease Enter Second Subject Number out of 100 (B)";
			cin>>b;
			cout<<"\nPlease Enter third Subject Number out of 100 (C)";
			cin>>c;
			cout<<"\nPlease Enter Four Subject Number out of 100 (D)";
			cin>>d;
			cout<<"\nPlease Enter Fifth Subject Number out of 100 (E)";
			cin>>e;
			
		}
		void calPer(){
			double sum ;
			 sum= a+b+c+d+e;
			percentage = (sum *100)/500;
			cout<<"\n Your percentage is : "<<percentage;
			
		}
		void grade(){
			if(percentage >=60 )
			   cout<<"\nYour  Grade is  A";
			else if(percentage >=50)
			   cout<<"\nYour Grade is  B";
			else if(percentage >=40) 
			   cout<<"\nYour Grade is C";
			else if(percentage <40) 
			   cout<<"\nYour Grade is D";
		}
};
int main(){
	Student s1;
	s1.inputmark();
	s1.calPer();
	s1.grade();
}

*/


//6>WAP to create a class  Highest which can
//#find highest number amoung 3 numbers.
//#data member: int n1,n2,n3,high.
//#member function: parameterized_constructor(), highest()

/*
#include<iostream>
using namespace std;
class Highest{
	int n1,n2,n3,high;
	
	public:
	    	
	  Highest( int N1 ,int N2,int N3){
		n1 = N1;
		n2 = N2; 
		n3 = N3;
	}
	void highest(){
		if(n1>=n2 && n1>=n3)
		   cout<<"Highest Number is N1 : "<<n1;
		else if(n2>=n1 && n2>=n3)
		   cout<<"Highest Number is N2 : "<<n2;
		else if(n3>=n1 && n3>=n2)
		   cout<<"Highest Numbet is  N3 : "<<n3;
	}
};
int main(){
	Highest h1(23,64,78);
	h1.highest();
}
*/

//7>WAP to create a class  Swap which can
//#swap the value of 2 variable.
//#data member: int num.
//#member function: parameterized_constructor(), swap()


/*
#include<iostream>
using namespace std;
class Swap{
	int num;
	public :
		Swap(int n){
			num = n;
		}
		void swap(){
			int 
			
		}
};
int main(){
	
}
*/


//8>WAP to create a class  Factorial which can
//#find the factorial of a num.
//#data member: int num.
//#member function: parameterized_constructor(), factorial()

#include<iostream>
using namespace std;
class Factorial{
	int num;
	public : 
	  Factorial(int n){
	  	num = n;
	  }
	  void factorial(){
	  	int fact =1;
	  	int i;
	  	 for ( i=1;i<=num;i++){
	  	 	 fact = fact*i;
		   }
	  	  cout<<fact;
	  }
	
};

int main(){
	Factorial f1(5);
	f1.factorial();
}
