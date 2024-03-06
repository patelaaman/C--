#include <iostream>
using namespace std;

int main(){
	int n , sum =0,num;
	cout<<"Enter Range ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Enter Number "<<i<<" : ";
		cin>>num;
		sum=sum+num;
		
	}
	cout<<"Sum = "<<sum;
}
