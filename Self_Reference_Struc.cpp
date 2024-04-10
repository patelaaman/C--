/*Self  referance structure 
==========================

--->  self reference structure is used to linked n nodes of same type.

struct node{
     int data ;//  data define 
     node * next; // pointer  --> next data
}

Call by Value   &  Call by Reference
=======================================
*/

//  Call by Value  

/*
#include<iostream>
using namespace std;

void swap(int a ,int b){
	cout<<"Before swap : first = "<<a<<" Second : "<<b<<end;
	a = a+b;
	a = a-b;
	a = a-b;
	cout<<"\nAfter swap: first= "<<a<<" Second : "<<b
}

int main(){
   int n1 = 90, n2 = 39;  
   swap(n1,n2);    //Actual parameter 
   cout<<"After swap is main L  first : "<<n1<<" Second : "<<n2<<endl;
}
*/


// Call by reference 
#include<iostream>
using namespace std;
void swap(int *a ,int *b){
	cout<<"Before swap: first = "<<*a<<" Second : "<<*b<<endl;
	int temp ;
	temp = *a;
	*a = *b;
	*b = temp;
	cout<<"\n After swap: first = "<<*a<<" Second : "<<*b<<endl;
}
int main(){
	int n1 =90,n2 = 39;
	swap(&n1,&n2);
	cout<<"After Swap in main : first  = "<<n1<<" second : "<<n2<<endl;
}


