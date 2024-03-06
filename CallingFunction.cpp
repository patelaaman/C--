#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string st;
	ifstream read("C:\\Users\\hp\\OneDrive\\Aman\\first.txt");
	while(getline(read,st)){
		cout<<st<<endl;
	}
}
