#include <iostream>
using namespace std;
int main(){
	int age;
	char nation;
	cout<<"Enter Your Age : ";
     cin>>age;
     cout<<endl<<"Are you Indian type 'y'or 'n'";
     cin>>nation;
     
     age>=18 && nation =='y' ? cout<<"Yes You are eligible " : cout<<"No you are not eligible";

	
	 //Wap to determine a number given by  a user  is even  numbr or  odd

   	int Num;
	cout<<endl<<"Enter Your Number : ";
     cin>>Num;
     
     Num%2==0  ? cout<<endl<<Num<<" is a Even Number " : cout<<Num<<" is a Odd number";
     return 0;
	
}
