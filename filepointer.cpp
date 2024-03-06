#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string st;
//	ofstream wr("first.txt");  // Write mode pe daata delete ho jata hai
    ifstream read("first.txt"); // ios -> is a class  & append(app) -> is a function
   
     cout<<read.tellg();
   
     getline(read,st);
     cout<<st<<endl;
     cout<<read.tellg();
     
	 read.close();
}
