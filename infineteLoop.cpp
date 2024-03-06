/*
num = 90  // initialization

while(num>80){   // test Expression
  
cout<<num<<endl;  // body of while

num++ ;  //updatation
 
}


Break : to come out of  block (loop, switch);

continue : (loop) restart the next cycle  from the begining of loop 


infinite loop:
while(1){
// must have a exit  point(break)
}
*/

#include<iostream>
using namespace std;
 
 int main(){
 	int num =10;
 	while(1){
	 
 	cout<<"Infinete loop "<<endl;
 	num++;
 	if(num==30){
 		break;  //Exit point
	 }
 }
}
