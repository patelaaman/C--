//Q.1>Design a base class Person with name and address attributes.
// Derive classes Student and Teacher from Person.

/*
#include<iostream>
using namespace std;

class person{
	public :
		string name ,address;
	void input(){
		cout<<"\nEnter Your name : ";
		cin>>name;
		cout<<"\n Enter Your Address : ";
		cin>>address;
	}
	void display(){
		cout<<"\nYour Name is "<<name;
		cout<<"\nYour Address is "<<address;
	}	
};

class student : public person{
	   int id;
	public :
		void input1(){
			input();
			cout<<"\nEnter Your Id :";
			cin>>id;
		}
		
		void display1(){
			display();
			cout<<"\nYour Id is "<<id;
		}
	
};

class Teacher : public person{
	string sub;
	public :
		void input2(){
			input();
			cout<<"\nEnter Your subject : ";
			cin>>sub;
		}
		void display2(){
			display();
			cout<<"\nYour Subject is :"<<sub;
		}
	
};


int main(){
	 student s1;
	 Teacher t1;
	 t1.input2();
	 t1.display2();
}
*/


//Q.2>Create a base class Shape with methods to calculate area and perimeter. 
// Derive classes Circle and Rectangle.

/*
#include<iostream>
using namespace std;

class Shape{
	
   public :
   	int length; 
	int width ;
	double r;
   	void area(){
   		cout<<"\nEnter your length :";
   		cin>>length;
   		cout<<"\nEnter Your width :";
   		cin>>width;
   		}
   	void Rac(){
   		cout<<"\nEnter radius : ";
   		cin>>r;
	   }
	
};
class Circle : public Shape{
	  int ArOfCir;
	public :
		
		void cir(){
			
			ArOfCir = length*width;
		}
		void display(){
			cout<<endl;
			cir();
			cout<<"\nEnter your length :"<<ArOfCir;
		}
	
}; 

class Rectangle : public Shape{
	public :
	double pI = 3.14;
	double  ArOfRac;
	void Ract(){
			Rac();
			ArOfRac = pI*r*r;
		}
	void display2(){
			Ract();
			cout<<"\nEnter your length :"<<ArOfRac;
		}
};
int main(){
      Circle c1;
      Rectangle r1;
      c1.area();
      c1.display();
      
      r1.display2();
}

*/

//Q.3>Implement a base class BankAccount with methods for deposit and withdraw. 
//Derive classes SavingsAccount and 
//CheckingAccount.

#include<iostream>
using namespace std;

class BankAccount{
	string name ;
	int accountNo;
	string AccType;
  public :
  	void Acc_details()
  	{
  		cout<<"\nEnter Customer name : ";
  		cin>>name;
  		cout<<"\nEnter Account Number : ";
  		cin>>accountNo;
  	    cout<<"\nEnter Account Type : ";
        cin>>AccType;
  		
	}
	void display_detials(){
		cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accountNo;
        cout<<"\nAccount Type    : "<<AccType;
	}
};

class Current_acc :public BankAccount{
	float balance;
	public :
		void c_display(){
			cout<<"\nBalance : "<<balance;
		}
		void c_deposit(){
			float deposit;
			cout<<"\n Enter amount  to deposit : ";
			cin>>deposit;
			balance = balance + deposit;
	
		}
		void c_withdrawal(){
			float withdrawal;
			cout<<"\nEnter ammount to be withdrawal :";
			cin>>withdrawal;
			if(balance>1000)
			{
				balance = balance - withdrawal;
	            cout<<"\nBalance Amount After Withdraw: "<<balance;
			}
			else
			  cout<<"\n Insufficient Balance "; 
		}
		
};
class Saving_Acc : public BankAccount{
	float sav_bal;
	
	public :
		void s_display(){
			cout<<"\nBalance with Intrest : "<<sav_bal+100;
		}
		void s_diposit(){
			float doeposit;
			cout<<"\n Enter amount  to deposit : ";
			cin>>doeposit;
			sav_bal = sav_bal + doeposit;
			
		}
		void s_withdrawal(){
		    float withdraw;
            cout<<"\nEnter amount to be withdraw : ";
            cin>>withdraw;
           if(sav_bal > 500)
        {
            sav_bal=sav_bal-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_bal;
        }
        else
            cout<<"\n Insufficient Balance";
	}
};

int main(){
	BankAccount b1;
	Current_acc  c1;
	Saving_Acc  s1;
	
	s1.Acc_details();
	s1.display_detials();
	
	string Saving ;
	cout<<"Enter Type C(Cuurent)  or S(saving) : ";
	cin>>Saving;
	
	if(Saving=="C"){
        c1.c_deposit();
        c1.c_display();
       c1.c_withdrawal();
    } else{
    	s1.s_diposit();
        s1.s_display();
        s1.s_withdrawal();
	}
   
	
}
