#include<iostream>
using namespace std;

 string average(int,int,int,int,int);  // Prototype  or signature or decleration

int main(){
	int n1,n2,n3,n4,n5;  
	string msg;
	cout<<"Enter The 5 number";
	cin>>n1>>n2>>n3>>n4>>n5; 
    msg=	average(n1,n2,n3,n4,n5);     // actual parameter // parameter
    cout<<msg;
	
	average(33,35,5,45,4);      // argument pass
}

/*
Function  parametr  > formal paramenter  // a,b,c,d,e
main define  --> actual  parameter -->
a=n1,b=n2, c=n3,d=n4,e=n5 copy value

*/


string average(int a ,int b,int c,int d,int e){  //formal parameter
	 int add = (a+b+c+d+e);
	double average = add/5;
	cout<<"Averrage = "<<average<<endl;
 return "success";
}
