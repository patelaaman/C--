/*

Hint :
cout  
*/
#include<iostream>
using namespace std;

int main(){
	int num , positive=0, negetive=0, zero=0;
	char ch;
	while(1){
		cout<<"Enter a number : ";
		cin>>num;
		if(num>0){
			positive++;
		}
		else if(num<0){
			negetive++;
		}
		else if (num==0){
			zero++;
		}
	cout<<" \n Do you want to continue 'y' or 'n' : ";
		cin>>ch;
	
	if(ch=='y'){
         continue;
      	}	
	   else if( ch =='n'){
			cout<<"Thank you for using our service ";
			break;
		}
	
}
	cout<<"\nPositive = "<<positive;
	cout<<"\nNegative = "<<negetive;
	cout<<"\nZero = "<<zero;
}

