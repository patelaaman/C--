/*
 Jumping statement :
  break ,continue, goto ,return
 
 
 Syntax:
     
	 goto label1; //state.4  //  label block
	 sta_5;
	 sta_6;
	 sta_6;
	 label1;{    //directly jump  here after encounter  label1
	   //set of statement 
	 }
*/
#include <iostream>
using namespace std;

int main(){
/*	cout<<"Welcome\n";
		cout<<"To\n";
		goto new_msg;
			cout<<"Cybrom\n";
	new_msg :{
		cout<<"C++ classes\n";
	}*/
	
	int n;
	cout<<"Enter Number: ";
	cin>>n;
  int  table=1;
    new1 : {
	cout<<" "<<table*n<<endl;

	if(table==10){
		goto exit;
	}
		table++;
	}
	goto new1;

	exit:{
	cout<<"Thank You";
	}
	
}
  
