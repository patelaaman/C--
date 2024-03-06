/*
Pointer function -->file handling

tellg() --> current position(input)
tellp() --> current position(output)

seekg()  -->  move to particuler position(input)
seekp()  -->  move to particuler position(output)

*/


#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string st;
    ofstream wr("first.txt" ,ios::app); // ios -> is a class  & append(app) -> is a function
    cout<<wr.tellp();
    wr<<"THis is gaurav";
	wr.close();
}
