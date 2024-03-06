#include<iostream>
using namespace std;

int main(){
/*
*
**
***
****
*****
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<"& ";
		}
		cout<<endl;
	}*/
	
	/*
*****
****
***
**
*
	for(int i =5;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
			
		}
		cout<<endl;
	}
	*/
/*
******
*    *
*    *
******
	for(int i=1;i<=5;i++){
		for(int j=1 ;j<=5;j++){
			if(i==1|| i==5|| j==1|| j==5)
			{
		     	cout<<"*";
			}else{
					cout<<" ";
			}
		
		}
		cout<<endl;
	}
*/

/*
*    *****
*    *
*    *
**********
     *   *
     *   *
******   *
     
	
	
	for(int i=1 ;i<=9;i++){
		for(int j=1;j<=9;j++){ 
			if(i==5||j==5||(j==1&&i<=5)||(i==9&&j<=5)||(i==1&&j>=5)||(j==9&&i>=5)){
				cout<<"*";
			}
		   else{
		   	cout<<" ";
		   }
		}
			cout<<endl;
	}
*/	
 /*
  *
  .*
  .**
  .***
  .****
  
  for(int i=1;i<=5;i++){
  	if(i==1){
  		cout<<"*";
	  }
	  else
  	  cout<<".";
  	for(int j=1;j<i;j++){
  		cout<<"*";
	  }
	  cout<<endl;
  }
  */
/*
1
12
123
1234
12345
  
  for(int i=1;i<=5;i++){
  	for(int j=1;j<=i;j++){
  		cout<<j<<" ";
	  }
	  cout<<endl;
  }
  */
  
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
  for(int i=1;i<=5;i++){
  	for(int j=1;j<=i;j++){
  		cout<<i<<" ";
	  }
	  cout<<endl;
  }
  */
  
/*
 . * * * *
 . * * * 
 . * *
 . *
*
  for(int i=5; i>=1;i--){
  	if(i==1)
  	{cout<<" * ";
	  }
  	  
  	else if(i==5||i==4||i==3||i==2)
  	    {cout<<" ";
		  }
  	for(int j=1;j<=i;j++){
  		if(j==1&&j!=i){
  			cout<<"  . ";	
		  }
		else if(j==1&&j==i)
		   cout<<" ";//cout<<"9"
  		else
  		  cout<<" * ";
	  }
	  cout<<endl;
  }
  */
  
/*
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
   for(int i=5;i>=1;i--){
  	for(int j=1;j<=i;j++){
  		cout<<j<<" ";
	  }
	  cout<<endl;
   }
   */
   
/*
 5 5 5 5 5
 4 4 4 4
 3 3 3 
 2 2 
 1
    for(int i=5;i>=1;i--){
  	for(int j=1;j<=i;j++){
  		cout<<i<<" ";
	  }
	  cout<<endl;
   }
   */

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

   for(int i=1;i<=5;i++){
  	for(int j=1;j<=i;j++){
  		if(i==1)
  		cout<<j<<" ";
  		else if(i==2)
  		cout<<j+1<<" ";
  		else if(i==3)
  		cout<<j+3<<" ";
  		else if(i==4)
  		cout<<j+6<<" ";
  		else if(i==5)
  		cout<<j+10<<" ";
	  }
	  cout<<endl;
  }
  */
  
/*
   for(char i='A';i<='E';i++){
  	for(char j='A';j<=i;j++){
  		cout<<j<<" ";
	  }
	  cout<<endl;
  }
  */
   for(int i=1;i<=5;i++){
  	for(int j=1;j<=5;j++){
  		if(i==5 || (j>=5&&i==1))
  		  cout<<" * ";
	  }
	  cout<<endl;
  }
}
