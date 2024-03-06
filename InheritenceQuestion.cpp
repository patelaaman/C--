//Inheritance Question

/*1.Define a class to represent a bank account. Include the following members:

Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.
5) password 

Member functions:
1) To assign initial values (constructor)
2) To deposit an amount (match password if want to perform operation)
3) To withdraw an amount after checking the balance (match password if want to perform operation)
4) To display name and balance.

*/


#include<iostream>
using namespace std;

class BankAc{
	string Dname;
	int Acnum;
     string Actype;
     int balance;
     string password;
     
     
     
     public :
           BankAc(){
           	cout<<"Enter Depositer Name : ";
           	cin>>Dname;
           	cout<<"\nEnter Account Number : ";
           	cin>>Acnum;
           	cout<<"\nEnter Type of Account Like Saving or current or : ";
           	cin>>Actype;
           	cout<<"\nEnter Balance : ";
           	cin>>balance;
           	cout<<"\nEnter Your Password : ";
           	cin>>password;
           	cout<<"Yout Balance is "<<balance;
           	
		   }
		   void diposite(double amount){
		   	cout<<"\nEnter password  to diposite : ";
		   	string pass;
		   	cin>>pass;
		   	   if(password == pass){
		   	   	 balance = balance + amount;
		   	         cout << "\nYour Amount is  "<<balance;
				  }
		   	    else {
                      cout<<"Incorrect password. Deposit operation failed.";
        }
		   }
		   void withdrawal(double amount){
		   	cout<<"\n Enter password  to withdrawal : ";
		   	string pass;
		   	cin>>pass;
		   	    if(password == pass)
		   	        {
		   	        	if(amount<=balance){
		   	        		balance = balance - amount;
		   	        	    cout<<"\nYes You can withdraw Your amount after Withdrawal your amount is : "<<balance;
						   }
						 else {
                              cout<<"\nInsufficient balance. Withdrawal operation failed.";
                            }  
		   	        	  
		   }
		   else {
                cout<<"\nIncorrect password. Withdrawal operation failed.";
            }
		}
		   void display(){
		   	cout<<"\nDipositer name is :"<<Dname;
		   	cout<<"\nYour Balance is "<<balance;
		   }
		   
};
      
int main(){
	  BankAc e;
	  e.diposite(500.0);
	  e.withdrawal(200.0);
	  e.display();
}



/*
3.Write a C++ program to find the area and perimeter of rectangle using class Rectangle which have following details:


Data members:
1) breadth
2) length
3) area
4) perimeter
Member functions:
1) area()
2) perimeter()
*/

/*
#include<iostream>
using namespace std;

class  Area{
	int breadth;
	int length;
	int par;
	int are;
	public :
		Area(){
			cout<<"Enter Breadth of Rectangle : ";
			cin>>breadth;
			cout<<"\nEnter Length of Ractangle : ";
			cin>>length;
		}
		void parameter(){
			par = 2*(length +breadth);
			cout<<"\nparameter of ractangle : "<<par;
		}
		void area(){
			are = breadth* length;
			cout<<"\nArea of Ractangle : "<<are;
		}
};

int main(){
	Area e;
	e.area();
	e.parameter();
}
*/
/*

Q.4)Define a class Ele_Bill in C++ with the following descriptions:

Private members:
 Cname of type character array
 Pnumber of type long
 No_of_units of type integer
 Amount of type float.
 Calc_Amount( ) This member function should calculate the
 amount as No_of_units*Cost .
 Amount can be calculated according to the following conditions:
No_of_units Cost
 First 50 units Free
 Next 100 units 0.80 @ unit
 Next 200 units 1.00 @ unit
 Remaining units 1.20 @ unit
Public members:
 * A default Constructor( ) which allows user to enter Cname,
 Pnumber, No_of_units and invoke function Calc_Amount().
 * A function Display( ) to display the values of all the data members
 on the screen.
*/


/*
#include<iostream>
using namespace std;

class Ele_bill{
	char Cname[20];
	long long Pnumber;
	int No_of_Units;
	float Amount;
	void Calc_Amount(){
		if(No_of_Units<=50)
		      Amount = 0;
	    else if(No_of_Units<=150 && No_of_Units>=51)
	        Amount = No_of_Units* 0.80;
	    else if(No_of_Units<=350 && No_of_Units>=151)
	         Amount = No_of_Units* 1;
	    else if(No_of_Units>=350)
	         Amount = No_of_Units*1.20;
	        
	}
   public  :
   	   Ele_bill(){
   	   	    cout<<"Enter Your Name : ";
   	   	    cin>>Cname;
   	   	    cout<<"\nEnter Your Phone Number : ";
   	   	    cin>>Pnumber;
   	   	    cout<<"\nEnter your Number of Units : ";
   	   	    cin>>No_of_Units;
   	   	    Calc_Amount();
		  }
		  display(){
		  	cout<<"Your Name is = "<<Cname;
		  	cout<<"\nYour Mobile Number is = "<<Pnumber;
		  	cout<<"\nNumber of Units is = "<<No_of_Units;
		  	cout<<"\nYour Ammount is = "<<Amount;
		  }
};

int main(){
	Ele_bill e1 ;
	e1.display();
}

*/

/*
Define a class Institution
having private member
int Code,char Course[20],float Fee.
having public member:
constructor()
display()

*/
/*
#include<iostream>
using namespace std;

class Institution{
	 int code ;
	 char Course[20];
	 float fee;
	 
	 public :
	 	Institution(){
	 		cout<<"Enter Your Code : ";
	 		cin>>code;
	 		cout<<"\nEnter Your Course : ";
	 		cin>>Course;
	 		cout<<"\nEnter Your fee : ";
	 		cin>>fee;
		 }
	  void display(){
	  	    cout<<"\nYour Code is = "<<code;
	  	    cout<<"\n Your Course is = "<<Course;
	  	    cout<<"\n Your Fees is = "<<fee;
	  }
};

int main(){
	Institution e;
	e.display();
}
*/

/*
Q'.6)Define a class TRANSPORT in  with the following 
specifications : 
having private member
- Vno-->int
- Vehicle -->string
- Type -->string
- FindType() # To assign Type of Vehicle
# based on Name of the Vehicle as shown
# below : 
Vehicle     ----------- Type
MotorCycle  ----------  MCYCL
Car         ------------MTV
Truck       ------------HTV
Bus         ------------HTV
Public Member:
- Enter() # To allow user to enter value of
# Vno and Vehicle. Also, this method should
# call FindType() to assign Type
- Display() # To display Vno, Vehicle and Type
*/

/*
#include<iostream>
using namespace std;

class Transport{
	int Vno;
	string VehicleName;
	string type;
	void findtype(){
	
		if(VehicleName == "MotorCycle")
		     cout<<"Vehicle type is MCYCL";
	    else if(VehicleName== "Car")
	         cout<<"Car  type is MTV";
	    else if(VehicleName=="Truck")
	         cout<<" Turck type is HTV";
	    else if(VehicleName== "Bus")
	         cout<<" Bus type is HTV";
	}
	
	public :
		Enter(){
			cout<<"\nEnter vehcle No. :";
			cin>>Vno;
			cout<<"\nEnter vehcle Name MotorCycle or Truck or Bus  or Car :";
			cin>>VehicleName;
		findtype();
			
		}
		void display(){
			cout<<endl<<"\nVehicle NO is  :"<<Vno;
			cout<<"\nVehicle Name is :"<<VehicleName<<endl;
			findtype();
		}
};

int main(){
	Transport e ;
	e.Enter();
	e.display();
}
*/
