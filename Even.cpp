#include <iostream>
using namespace std;

int main(){
/*	int n, i,sum=0 ,num;
	cout<<"Enter Number for range: ";
	cin>>n;
	for( i=1;i<=n;i++){
         cout<<"Enter Number "<<i<<" : ";
         cin>>num;
       	if(num%2==0){
             sum = sum+num;
              
		}
	}
cout<<"Even Sum =  "<<sum;*/

//Even and odd
int n, i,sum=0 ,Even=0,Odd=0;
	cout<<"Enter Number for range: ";
	cin>>n;
	for( i=1;i<=n;i++){
		int num;
         cout<<"Enter Number "<<i<<" : ";
         cin>>num;
       	if(num%2==0){
              Even= Even+num;
             // cout<<Even;
		}
		else{
			Odd=Odd+num;
		//	cout<<Odd;
		}
	}
cout<<"Even Sum =  "<<Even<<endl;
cout<<"Odd Sum = "<<Odd;
}
