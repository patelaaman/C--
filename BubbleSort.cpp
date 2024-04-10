#include<iostream>
using namespace std;

void bubblesort(int a[] ,int size){  //firmal parameter  // sizeko omit kar denge  // size 5
   int temp;
    for(int i = 0 ;i<size-1;i++){         //  number of passes  
    	for(int j=0;j<size-i-1;j++){      // size-i-1
    		if (a[j] >a[j+1]) {           //  i= 0   j= 5-0-1=4
			   temp  = a[j];     
			   a[j] = a[j+1];
			   a[j+1] = temp;
			}
		}
	}
	
}
int main(){
	int arr[5] = {3,7,-8,4,-2};
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	bubblesort(arr,5);
    for(int i =0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
}
