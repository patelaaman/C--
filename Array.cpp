#include<iostream>
using namespace std;

int main(){
//	double marks[5];
	
// 	cout<<marks[3];  when not difine in array element then console give the garbej value


    double marks[5]= {2,4,1,4};  //decleration of array
    //  double marks[5]= {2,4,1,4,6,7};   //error
    cout<<marks[3]<<endl;
    // cout<<marks[40];  // junk value or garbaje
    // duplication allow
    //last index in n-1;
    // mutation is allow in the array 
    marks[3]=15;
    cout<<marks[3];
}

