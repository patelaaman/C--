//Swapping using 3rd  variable
#include<iostream>
using namespace std;

int main(){
	int a =234, b=54 ,temp;
	cout<<"Before Swapping  a="<<a<<" b= "<<b<<endl;
	temp = a; //temp=234
	a =b;    // a = 54
	b=temp  ; // b = 234
	cout<<"After Swapping  a="<<a<<" b= "<<b<<endl;
}
/*
Swapping using 2 variable

a = a + b;
b = a - b;
a = a - b;
*/
