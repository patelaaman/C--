#include<iostream>
using namespace std;
int main(){
	int sw = 0;
	for(int i=10;i<200;i++){
		sw = 0;
		for(int j = 2 ;j<i/2;j++){
		
		 if(i%j==0){
		 	sw =1;
		 	break;
		 }   
	}
	if(sw == 0 ){
		cout<<i<<endl;
	}
  }
}
