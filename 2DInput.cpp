#include<iostream>
using namespace std;

int main(){
//	int ar[4][2]= {{2,4},{5,6},{7,8},{9,10}};  //  Declearation  of 2 D Array
//	cout<<ar[3][0]`<<endl ; 
//	
     
 /*    int row ,col;
     cout<<"Enter Row Whatever you want to enter : ";
     cin>>row;
     cout<<"\n Enter colomn Whatever you want to enter : ";
     cin>>col; 
	 cout<<"Here Your matrix is = "   ;
	 int arr[row][col];
	 //a[0][0], a[0][1] a[0][2]
	 //a[1][0],a[1][1], a[1][2]
	 for(int i =0; i<row;i++){
	 	for(int j=0;j<col;j++)
	 	{
	 		cout<<"Enter Number For Index "<<i<<j<<" ";
	 		cin>>arr[i][j] ;
		 }
	 } 
	  for(int i =0; i<row;i++){
	 	for(int j=0;j<col;j++)
	 	{
	 		cout<<arr[i][j] <<" ";
		 }
		 cout<<endl;
	 }  */
	 
	   int row ,col;
     cout<<"Enter Row Whatever you want to enter : ";
     cin>>row;
     cout<<"\n Enter colomn Whatever you want to enter : ";
     cin>>col; 
	 cout<<"Here Your matrix is = "   ;
	 int arr[row][col];
	 for(int i =0; i<row;i++){
	 	for(int j=0;j<col;j++)
	 	{
	 		cout<<"Enter Number For Index "<<i<<j<<" ";
	 		cin>>arr[i][j] ;
		 }
	 } 
	 // mutation 
	 cout<<"After Mutation"
	  for(int i =0; i<row;i++){
	 	for(int j=0;j<col;j++)
	 	{
	 		if(i==j)
	 		cout<<arr[i][j] <<" ";   //arr[i][j] = arr[i][j] ;
	 		else
	 	    cout<<"0 ";              //arr[i][j] = 0;
		 }
		 cout<<endl;
	 }
	 
}


