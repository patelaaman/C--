#include<iostream>
using namespace std;

double calculator(int a,int b,char ch){
	double result;
	switch(ch){
		case '+':cout<<"Addition = "<<a+b;
		  break;
		case '-':cout<<"Addition = "<<a-b;
		  break;
		  case '%':cout<<"Addition = "<<a%b;
		  break;
		  case '/':cout<<"Addition = "<<a/b;
		  break;
		  case '*':cout<<"Addition = "<<a*b;
		  break;
		  default:cout<<"Invalid choice";
		   break;
	}
	return result;
}

int main(){
	int n1, n2;
	char choice;
	cout<<"Enter First  Number ";
	cin>>n1;
	cout<<"Enter Second  Number ";
	cin>>n2;
	cout<<"Enter Your choice (+, - , % ,/ ,*) ";
	cin>>choice;
	calculator(n1,n2,choice);
}
