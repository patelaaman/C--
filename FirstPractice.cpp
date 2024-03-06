#include<iostream>
using namespace std;

int main(){
    int row ,colon;
    cout<<"Enter number of row ";
    cin>>row ;
    cout<<"\nEnter number of Colonm : ";
    cin>>colon;
    cout<<"Here your matrix : ";
    int arr[row][colon];
    
    for(int i=0; i<row;i++){
    	for(int j= 0;j<colon;j++){
    		cout<<"Enter Number for index :"<<i<<" "<<j;
    		cin>>arr[i][j];
		}
	}
cout<<"After Mutation";
   for(int i=0; i<row;i++){
    	for(int j= 0;j<colon;j++){
    		cout<<arr[i][j]<<" ";
		}
		 cout<<endl;
	}    
}
