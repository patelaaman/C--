//write a program  to create a array of an element(n user defined)
/*
a) display array
b) display array in reverse order
c) add all element of  array
d) average
e) highest
f) second Heighest
g) lowest ,secind lowest
h) addition of even number
i) addition of Odd  number
j) addition of even  numbers and odd numbers
k) display only even number with thier index number.
*/

#include <iostream>
using namespace std;

int main(){
/*A- 
	int size;
	cout<<"Enter The size of Array :";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter element for index "<<i<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<"\n Element at Index "<<i<<" : "<<arr[i];
	}
	*/

/*C-- 
	int size;
		int sum =0;
	cout<<"Enter The size of Array :";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter element for index "<<i<<" : ";
		cin>>arr[i];
	}
		for(int i=0;i<size;i++){
		cout<<"\n Element at Index "<<i<<" : "<<arr[i];
			sum = sum + arr[i];
	}

	cout<<"\nSum = "<<sum;  */
	
// B -- Reverse
		int size ;                // 6
	cout<<"Enter The size of Array :";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter element for index "<<i<<" : ";
		cin>>arr[i];
	}
	// 34 45 7 57 53 6
	for(int i=0, j=size-1;i<size/2;i++,j--){
	    int temp =arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	}
	cout<<"\n Reverse All Element of the array :"<<endl;
	// reverse Array
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
//D - Average 
/*
	int size ;
	double average;
		int sum =0;
	cout<<"Enter The size of Array :";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter element for index "<<i<<" : ";
		cin>>arr[i];
	}
		for(int i=0;i<size;i++){
		cout<<"\n Element at Index "<<i<<" : "<<arr[i];
			sum = sum + arr[i];
	}
	average= sum/size;
	cout<<"	Average = "<<average;
	*/

/* E -- Maximum and minimum	
	int size, max,min;
	cout<<"Enter The Size of the array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array : ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	max= arr[0];
	for(int i=0;i<size;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	min = arr[0];
	
	for(int i =0;i<size;i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	cout<<"Largest Element : "<<max;
	cout<<"\n Smallest Element : "<<min;
	*/
}
