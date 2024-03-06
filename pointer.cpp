#include<iostream>
using namespace std;

int main(){
/*	int a = 25, b = 29;
	double d = 90.4;
	int *ptr;
	
	ptr = &a; 
	cout<<"Address of a "<<ptr;   
	// If we print the pointer variable then  it will always print the location of that pointer variable
	// note - hexadecimal variable found when i  run the program (ptr)
	
	// *  is used to print tha value whatever pointer store the value
	cout<<"\nValue at a  --> "<<*ptr; 
	
	  */
	
	int a = 23 , b =54;
	int *ptr1, *ptr2;
	
	ptr1 = &a;
	ptr2 = &b;
   if(*ptr1>*ptr2)
      *ptr1 = *ptr1+100;
    else
       *ptr2 = *ptr2+ 100;
       
    cout<<"A : "<<a<<" B : "<<b ;
	
}
