#include<iostream>
using namespace std;

 /*void day(int num){
 	//Switch mai kewal Integer and Charecter hi bas pass karte hai
 	switch(num){
 		case 1: cout<<"Monday";
 			    break;
 		case 2: cout<<"Tuesday";
		  break;
		case 3: cout<<"Wednesday";
		  break;
		case 4: cout<<"Thusday";
		  break;
		case 5:cout<<"Friday";
		  break;
	    case 6:cout<<"Saturday";
	    	 break;
		case 7:	cout<<"Sunday";
		 break;
		default :cout<<"Invalid choice";
		  break;
		  
		  //yadi break Statement ka use nahi karege to pure case display karega
	 }
 }*/
 string day(int num){
 	//Switch mai kewal Integer and Charecter hi bas pass karte hai
 	switch(num){
 		case 1: return "Monday";
 			    
 		case 2: return "Tuesday";
		  break;
		case 3: return "Wednesday";
		  break;
		case 4: return "Thusday";
		  
		case 5:return "Friday";
		 
	    case 6:return "Saturday";
	    	 
		case 7:	return "Sunday";
		 
		default : return "Invalid choice";
		  
		  
		  //yadi break Statement ka use nahi karege to pure case display karega
	 }
 }

int main(){
/*	int Day_num;
	cout<<"Enter Any day Number(1-7): ";
	cin>>Day_num;
	day(Day_num);
	*/
//	string result =day(Day_num);
//	Cout<<"Day Cooresponding To day number "<<Day_num<<" "<<result;
 
 int Day_num;
	cout<<"Enter Any day Number(1-7): ";
	cin>>Day_num;
	string result =day(Day_num);
   cout<<"Day Cooresponding To day number "<<Day_num<<" "<<result;

}
