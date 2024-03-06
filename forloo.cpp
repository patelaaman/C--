#include <iostream>
using namespace std;

int main(){
/*	for(int i=1;i<=10;i++){
		cout<<i<<endl;
	}   */
	int n, sum=0;
	cout<<"Enter range\n";
	cin>>n;
	cout<<"J";
	for(int i=1;i<=n;i++){
		if(i==n)
		{
			cout<<i<<" = ";
		}
		else{
				cout<<i<<endl;
		sum = sum+i;
		}
	
	} 
	cout<<sum;
}
