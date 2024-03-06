#include <iostream>
using namespace std;

int main(){
/*	double sal ,year_service,bonus;
	cout<<"Enter  your year  of service: ";
	cin>>year_service;
	 cout<<"Enter Your Salary: ";
	 cin>>sal;
	 
	 if(year_service>5){
	 	bonus = sal*(5.0/100);
	 	cout<<"Bonus = "<<bonus<<endl;
	 	cout<<"salary = "<<sal+bonus; 	
	 }
	 else{
	 	cout<<" You are Not Elligible  For The Bonus \n";
	 	cout<<"salary = "<<sal;
	 }
	 */
	 
	 int Quantity, discount;
	 cout<<"Enter  your Quantity of Ammount : ";
	cin>>Quantity;
	int cost = Quantity*100;
	 
	  if(cost>1000){
	 	discount = cost*(10.0/100);
	 	cout<<"You got a  Discount = "<<discount<<endl;
	 	cout<<" After Discount Cost = "<<cost-discount; 	
	 }
	 else{
	 	
	 	cout<<"You got no discount ";
	 	cout<<"You have to pay rs = "<<cost;
	 }
}
