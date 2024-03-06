#include <iostream>
using namespace std;
/*
  void laptop(double amount){
      double discount;
      if(Ammount>0 && Ammount<=25000){
			cout<<"In this Ammount "<<Ammount<<" 0.0% discount avialable \n";
			discount = (Ammount*0.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=25001 && Ammount<=57000){
			cout<<"In this Ammount "<<Ammount<<" 5.0% discount avialable \n";
			discount = (Ammount*5.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=57001 && Ammount<=100000){
			cout<<"In this Ammount "<<Ammount<<" 7.5% discount avialable \n";
			discount = (Ammount*7.5)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=100001 ){
			cout<<"In this Ammount "<<Ammount<<" 10.0% discount avialable \n";
			discount = (Ammount*10.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
        }
		else{
			cout<<"This is in No discount";
		}
  }
  
  void desktop(double amount){
        double discount;
        if(Ammount>0 && Ammount<=25000){
			cout<<"In this Ammount "<<Ammount<<" 5.0% discount avialable \n";
			discount = (Ammount*5.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=25001 && Ammount<=57000){
			cout<<"In this Ammount "<<Ammount<<" 7.5% discount avialable \n";
			discount = (Ammount*7.5)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=57001 && Ammount<=100000){
			cout<<"In this Ammount "<<Ammount<<" 10.0% discount avialable \n";
			discount = (Ammount*10.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=100001 ){
			cout<<"In this Ammount "<<Ammount<<" 15.0% discount avialable \n";
			discount = (Ammount*15.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
        }
		else{
			cout<<"This is in No discount";
		}
  }
  
  int main(){

     	string name, address;
	double Ammount ,discount;
	string type;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	
	cout<<"\nEnter Your Adress : ";
	cin>>address;
	
	cout<<"\nEnter Your Ammount of Purchesh laptop or desktop: ";
	cin>>Ammount;
	
	cout<<"\nEnter Type of Purchesh Laptop(L) Or DeskTop(D) : ";
	cin>>type;
	string lap="L";
	string Desk="D";
	
	if(type == lap){
	     laptop(amount);
	 }
   else if(type == desk){
       desktop(amount);
   }
}
  

*/

int main(){
	string name, address;
	double Ammount ,discount;
	string type;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	
	cout<<"\nEnter Your Adress : ";
	cin>>address;
	
	cout<<"\nEnter Your Ammount of Purchesh laptop or desktop: ";
	cin>>Ammount;
	
	cout<<"\nEnter Type of Purchesh Laptop(L) Or DeskTop(D) : ";
	cin>>type;
	string lap="L";
	string Desk="D";
	
	// Laptop discount
	if(type == lap){
	    if(Ammount>0 && Ammount<=25000){
			cout<<"In this Ammount "<<Ammount<<" 0.0% discount avialable \n";
			discount = (Ammount*0.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=25001 && Ammount<=57000){
			cout<<"In this Ammount "<<Ammount<<" 5.0% discount avialable \n";
			discount = (Ammount*5.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=57001 && Ammount<=100000){
			cout<<"In this Ammount "<<Ammount<<" 7.5% discount avialable \n";
			discount = (Ammount*7.5)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=100001 ){
			cout<<"In this Ammount "<<Ammount<<" 10.0% discount avialable \n";
			discount = (Ammount*10.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Lappi Price Is = "<<Ammount-discount;
        }
		else{
			cout<<"This is in No discount";
		}
	}
	// Desktop  Discount 
	else if(type == Desk){
		if(Ammount>0 && Ammount<=25000){
			cout<<"In this Ammount "<<Ammount<<" 5.0% discount avialable \n";
			discount = (Ammount*5.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=25001 && Ammount<=57000){
			cout<<"In this Ammount "<<Ammount<<" 7.5% discount avialable \n";
			discount = (Ammount*7.5)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=57001 && Ammount<=100000){
			cout<<"In this Ammount "<<Ammount<<" 10.0% discount avialable \n";
			discount = (Ammount*10.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
		}
		else if(Ammount>=100001 ){
			cout<<"In this Ammount "<<Ammount<<" 15.0% discount avialable \n";
			discount = (Ammount*15.0)/100;
			cout<<"You got a discount = "<<discount;
			cout<<"\nAfter Discount Your Desktop Price Is = "<<Ammount-discount;
        }
		else{
			cout<<"This is in No discount";
		}
	}

}
