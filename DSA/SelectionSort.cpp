// Selection Short
// Stable : whenever there are similar element in an array going to be sorted and if there order is 
//  properly meintain
#include<iostream>
using namespace std;

void selection_sort(int a[], int size){
	 int temp ,index;
	for(int i=0;i<size-1;i++){
		index = i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[index])
			  index =j;
		}
		temp  = a[i];
		a[i]  = a[index];
		a[index] = temp;
	}
}
int main(){
	int arr[5] ={34,5,2,63,5};
	selection_sort(arr,5);
	
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
