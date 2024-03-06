/* Wap to print fibanacci series of n terms  n=8 
0,1,1,2,3,5,8,13
*/
/*
Wap to print fibonacci series upto  num ber n=8 
0,1,1,2,3,5,8*/
#include<iostream>
using namespace std;

int main(){
	int n ,n1=0 ,n2=1;
	cout<<"Enter Number for the fibanacci range :";
	cin>>n;
	cout<<n1 <<" "<<n2<<" ";
	for(int i=1;i<=n-2;i++ ){
		int n3 =n1 + n2;
		cout<<n3<<" ";
		n1 = n2;
		n2 = n3;
		}
	cout<<"Total of fibanacci  = "<<n3;
}
