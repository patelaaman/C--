#include<iostream>
using namespace std;

void leap(){
	int year;
	cout<<"Enter Year ";
	cin>>year;
	if((year%4==0 && year%100 !=0) || year%400==0)
	    cout<<year<<" is a leap Year";  //cascadding of output
	    
	else{
		cout<<year<<" is not a leap  year";
	}
}
int main(){
	leap();
}

