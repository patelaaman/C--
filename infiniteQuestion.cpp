#include<iostream>
using namespace std;

int main(){
	int n1 ,n2;
	char ch;   //  'y'  or 'n'
	while(1){
		cout<<"Enter first number ";
		cin>>n1;
		cout<<"Enter second number ";
		cin>>n2;
		cout <<"\nAddition = "<<n1+n2;
		cout<<" \n Do you want to continue 'y' or 'n' : ";
		cin>>ch;
		if(ch=='y'){
			continue;
		}
	   else if( ch=='n'){
			cout<<"Thank you for using our service ";
			break;
		}
	}
}
