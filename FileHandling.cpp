//  File handling is used to store data permanently in a computer. 
// Using file handling we can store our data in secondary memory (Hard disk).
// How to achieve the File HandlingFor achieving file handling

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	
	
	// object distructer main work karta hai
/*
	ofstream w("fileone.txt");  // constructer
	cout<<"File Created :";
	w.close();                //healty practice  //resourse free
	
*/

// (\)back slash skip sequense hota hai

     ofstream w;
     w.open("C:\\Users\\hp\\OneDrive\\Aman\\new1.txt");
     cout<<"File Created ";
     w<<("This is Aman");
     w<<"This is Gaurav";
     w.close();
}
