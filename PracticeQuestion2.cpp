#include <iostream>
using namespace std;

int main(){
	double cost ,discount;
	
	cout<<"Enter Your Cost  ";
	cin>>cost;
	cout<<"\nYour cost is = "<<cost<<endl;
	
	if(cost<2000){
		cout<<"Discount Available 5% \n";
		discount = (cost*5.0)/100;
		cout<<"You got a discount = "<<discount;
		cout<<"\nThe Ammount To be Paid After Discount = "<<cost-discount;
	}
	else if(cost>=2001 && cost<=5000){
		cout<<"Discount Available 25% \n";
		discount = (cost*25.0)/100;
		cout<<"You got a discount = "<<discount;
		cout<<"\nThe Ammount To be Paid After Discount = "<<cost-discount;
	}
	else if(cost>=5001 && cost<=10000){
		cout<<"Discount Available 35% \n";
		discount = (cost*35.0)/100;
		cout<<"You got a discount = "<<discount;
		cout<<"\nThe Ammount To be Paid After Discount = "<<cost-discount;
	}
	else if(cost>=10001){
		cout<<"Discount Available 50% \n";
		discount = (cost*50.0)/100;
		cout<<"You got a discount = "<<discount;
		cout<<"\nThe Ammount To be Paid After Discount = "<<cost-discount;
	}
	else{
		cout<<"You Have No Discount";
	}
}
