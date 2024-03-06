// 1. Write a program to print all natural numbers from 1 to n
/*
#include<iostream>
using namespace std;

int main(){
	 int n;
	 cout<<"Enter Any number Till you want print the number : ";
	 cin>>n;
	 for(int i =1;i<=n; i++){
	 	cout<<i<<" ";
	 }
}
*/


// 2. Write a program to print all natural numbers in reverse
/*
#include<iostream>
using namespace std;

int main(){
	 int n;
	 cout<<"Enter Any number Till you want print the number : ";
	 cin>>n;
	 for(int i =n;i>=1; i--){
	 	cout<<i<<" ";
	 }
}
*/

// 3. Write a program to print tables
/*
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter any number what ever you want to print of the table : ";
	cin>>n;
	cout<<n<<" table is : \n";
	for(int i=1;i<=10;i++){
		int table = n*i;
		cout<<n<<" * "<<i<<" = "<<table<<endl;
	}
}
*/


// 4. Write a program to print reverse tables
/* 
#include<iostream>
using namespace std;

int main(){
		int n;
	cout<<"Enter any number what ever you want to print Reverse of the table : ";
	cin>>n;
	cout<<n<<" Reverse table is : \n";
	for(int i=10;i>=1;i--){
		int table = n*i;
		cout<<n<<" * "<<i<<" = "<<table<<endl;
	}
}
*/


// 5. Write a program to print all alphabets from a to z
/*
#include <iostream>
using namespace std;

int main(){
	cout<<"AlPhabet = \n";
	for(char Alpha='A';Alpha<='Z';Alpha++){
		cout<<Alpha<<" ";
	}
}
*/


// 6. Write a program to print reverse alphabets from Z to A
/*
#include <iostream>
using namespace std;

int main(){
	cout<<" Reverse AlPhabet = \n";
	for(char Alpha='Z';Alpha>='A';Alpha--){
		cout<<Alpha<<" ";
	}
}
*/

// 7. Write a program to print all even numbers between 1 to 100
/*
#include<iostream>
using namespace std;

int main(){
	cout<<"Even = ";
	for(int i = 1; i<=100;i++){
		if(i%2==0)
		   cout<<i<<" ";
	}
}
*/


// 8. Write a program to print all odd number between 1 to 100
/*
#include<iostream>
using namespace std;

int main(){
      cout<<"Odd = ";
	for(int i = 1; i<=100;i++){
		if(i%2!=0)
		   cout<<i<<" ";
	}
}
*/


//9. Write a program to find sum of all natural numbers between 1 to n

/*using namespace std;

int main(){
	int n, sum =0;
	cout<<"Enter A number ";
	cin>>n;
	for( int i=1;i<=n;i++){
		sum = sum+i;
		if(i<n)
		cout<<i<<" + ";
		else if(i==n)
		  cout<<" = ";
	}
	cout<<" = "<<sum;
}
*/

// 10-11 . Write a program to find sum of all even and Odd numbers between 1 to n
/*
#include<iostream>
using namespace std;

int main(){
	int n ,Even=0 ,Odd=0;
	cout<<"Enter A number : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			Even =Even+i;
			cout<<i;
		if(i<n)
		  cout<<" + ";
		else if(i==n)
		  cout<<" = ";
		}
	
		
	}
	cout<<"(Even sum) "<<Even<<endl;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			Odd =Odd+i;
			cout<<i;
		if(i<n-2)
		  cout<<" + ";
		else if(i==n-1)
		  cout<<" = ";
		}		
	}	
	cout<<"(Odd sum) "<<Odd;

}
*/


// 12. Write a program to find the factorial value of any number
/*
#include <iostream>
using namespace std;

int main(){
	int n ,fact =1 ;
	int factSum =0;
	cout<<"Enter Any number : ";
	cin>>n;
	for(int i=1;i<=n;i++){
	//	fact =i*i;
	    fact = fact*i;
		cout<<fact;
		
		factSum = factSum + fact;
		if(i<n)
		  cout<<" + ";
		else if(i==n)
		  cout<<" = ";
	}
	cout<<"Factorial = "<<factSum;
}
*/


// 13. Write a program to find the value of one number raised to the 
// power of another.
/*
#include <iostream>
using namespace std;

int main(){
	int n ,p ,power =1;
	cout<<"Enter Any number whatever you want to  raised power : ";
	cin>>n;
	cout<<"\nEnter Power of the number : ";
	cin>>p;
	for(int i=1;i<=p;i++){
		power = power*n;
	}
	cout<<"Power of "<<n<<"^"<<p<<" = "<<power;
}
*/


// 14.write a program to reverse the given Digits
/*
#include<iostream>
using namespace std;

int main(){
     
	 /*
	 int n ,rem, rev=0;
     cout<<"Enter Any Numbeer : ";
     cin>>n;
     while(n!=0){
     	rem  =  n % 10;
     	rev = (rev*10.0)+rem;
     	n = n/10;
	 }
	 //using For loop
	 int n ,rem ,rev ;
     cout<<"Enter Any Numbeer : ";
     cin>>n;
	 for(rev =0;n>0;){
	 	rem = n%10;
	 	rev = rev*10+rem;
	 	n=n/10;
	 }
	 cout<<"Reverse of the number "<<" = "<<rev;
}
*/

// 15. write a program to sum of its Digits
/*
include<iostream>
using namespace std;

int main(){
     int num, rem, sum;

cout<<"Enter the Number: ";
cin>>num;
for(sum=0; num>0; num=num/10)   //345 = 345/10
{
    rem = num%10;          //5 ,   
    sum = sum+rem;  
}
cout<<"\nSum of Digits = "<<sum;
}
*/

//16. write a program to Check Whether a Given Number is Prime or Not
/*
#include <iostream>
using namespace std;

int main(){
	int num ,flag=0;  //flag --->Switch(on-off)//indicator
	cout<<"Enter NUmber : ";
	cin>>num;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	   cout<<"Prime";
	else
	   cout<<"Not a Prime ";
}
*/


// 17. Write a program to calculate HCF of Two given number

/*
#include<iostream>
using namespace std;

int main()
{
    int num1 , num2 , hcf = 1;
    cout<<"Enter Number Num1 : ";
    cin>>num1;
    cout<<"Enter Number Num2 : ";
    cin>>num2;
    

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf;

    return 0;
}
*/

// 18. Write a program to enter the numbers till the user wants and at the end 
/*
#include <iostream>
using namespace std;

int main(){
	int n ;
	cout<<"Enter Number Till you print ";
	cin>>n;
	for(int  i=1;i<=n;i++){
		int num;
	      cin>>num;
	      cout<<"\n";
	}
}
*/


// 18. Write a program to enter the numbers till the user wants and at the end 
// it should display the count of positive, negative and zeros entered
/*
#include<iostream>
using namespace std;

int main(){
	int num , positive=0, negetive=0, zero=0;
	char ch;
	while(1){
		cout<<"Enter a number : ";
		cin>>num;
		if(num>0){
			positive++;
		}
		else if(num<0){
			negetive++;
		}
		else if (num==0){
			zero++;
		}
	cout<<" \n Do you want to continue 'y' or 'n' : ";
		cin>>ch;
	
	if(ch=='y'){
         continue;
      	}	
	   else if( ch=='n'){
			cout<<"Thank you for using our service ";
			break;
		}
	
}
	cout<<"\nPositive = "<<positive;
	cout<<"\nNegative = "<<negetive;
	cout<<"\nZero = "<<zero;
}
*/

// HCF Program 
#include<iostream>
using namespace std;

int main(){
	int n1,n2, small ,flag=0;
	  cout<<"enter 2 number : ";
	  cin>>n1>>n2;
	  n1<n2 ? small=n1:small=n2;
	  
	  for(int i=small;i>=2;i--){
	  	if(n1%i==0 && n2%i==0){
	  		cout<<"HCF = "<<i;
	  		flag=1;
	  		break;
		  }
	  }
	  if(flag==0){
	  	cout<<"No Common factor ";
	  }
}
