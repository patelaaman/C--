//Exception handling:
//====================
//
//error :
//
//  compile time error
//  logical error
//  runtime Error(Exception) -->user input 
//(run time ko hi exception bolte hai ,aur jab use handle karte hai use Exception handaling  kahte hai
//
//exception handling
// Exception        --> any  undesired event occured during runtime 
//
//syntax
//
//try{
//    //code which we want to test / normal code
//  throw value;// statement
//   throw value1;
//   throw value2;
//  }
// catch(parameter){
//           }


// wap to find the factorial  of a normal n ,if user entered naegative number throw  an Exception
// wap to demostrate use of multiple catch 

/*
#include <iostream>
using namespace std;

int main(){
	   int n ;
	   try{
	   	    cout<<"Enter positive number : ";
	   	    cin>>n;
	   	    if(n<0)
	   	       throw n;
	   	    int p = 1;
	   	    for(int i=n;i>=1;i--){
	   	    	p= p*i;
			   }
			   cout<<"\nFactorial --> "<<p;
	   }
	   catch(int num){
	            cout<<"Exception occured  -->"<<num<<endl;
	            cout<<"Number negative ,we can't find the factorial of --> "<<num;
	   }	 
}
*/

// Wap to take input from user again and again with the help of loop,
// if user enterd multiple of 10 , thow  and exception

#include <iostream>

using namespace std;

int main() {
     int n;
        try {
            cout<<"Enter positive number : ";
	   	    cin>>n;
	   	    if(n<0){
	   	    	 throw n;
			   }
	   	      
            else if(n>10 && n<50){
            	throw 'C';
			}
		
			else if(n>100 && n<200){
            	throw "Aman";
			}
			else if(n==800){
            	throw 554.45;
			}
}
        catch(int num){
             cout<<" The number is "<<num<<endl;
        }
        catch(char ch ){
             cout<<"\n The Character is : "<<ch<<endl;
        }
        catch(double d){
        	cout<<"\n the double  number is : "<<d<<endl;
		}
		catch(string a){
			cout<<"\n the String is : "<<a<<endl;
		}

}


