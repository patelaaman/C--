// Insertion  sort

#include<iostream>
using namespace std;

void insert(int a[],int n){
	int key,j;
	for(int i =1;i<n;i++){
		key  = a[i];
		j = i-1;
		while(j>=0 && key<a[j]){
			a[j+1] =  a[j];
			j--;
		}
		j++;
		a[j] = key;
	}
}

int main(){
	int arr[5] = {3,-5 ,53,5,2};
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" "<<endl;
	}
	insert(arr, 5);
		for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
