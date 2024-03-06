//WAP to create a class  LowestHighest which can inherit class Highest(mentioned above)
//#find lowest number amoung 3 numbers.
//#with the help of parent class Highest.
//#data member: int low.
//#member function: parameterized_constructor()-->call parent constructor, lowest()



#include<iostream>
using namespace std;

class Highest{
	protected :
		
		int a,b,c;
	public :
		Highest(int d,int e,int f){
			a = d;
			b = f;
			c =e;
		}
		virtual void highest(){
			if(a>=b &&a>=c){
			    cout<<"\n Highest Number is "<<a;	
			}
			else if(b>= a && b>=c){
				cout<<"\n Highest number is "<<b;
			}
			else if(c>=a && c>=b){
				cout<<"\n Highest Number is "<<c;
			}
		}
		virtual void lowest(){
			
			if(a<=b &&a<=c){
			    cout<<"\n Highest Number is "<<a;	
			}
			else if(b<= a && b<=c){
				cout<<"\n Highest number is "<<b;
			}
			else if(c<=a && c<=b){
				cout<<"\n Highest Number is "<<c;
			}
		}
};
class LowestHighest :public Highest{
	int low =0;
	public :
		LowestHighest(int d,int e ,int f):Highest(d,e,f){
		  
		}
};

int main(){
	Highest *ptr ;
	LowestHighest l(23,74,8);
	ptr=&l;
	ptr->lowest();

	
}

//*/


//2>WAP to create a class DeterminerExtend  which can inherit class Determiner(mentioned above)
//#data member: no.
//#member function: parameterized_constructor()-->call parent constructor,
//prime().

//#include<iostream>
//using namespace std;
//
//class  Determiner{
//	protected:
//		
//		int num;
//	public : 
//	   Determiner(int n){
//	   	 num = n;
//	   }
//	 virtual  bool prime(){
//		   if(num == 0|| num == 1){
//		   	  return false;
//		   }
//		   
//		   for(int i = 2 ;i<=num/2; i++){
//		   	if(num%i ==0){
//		   		return false ;
//		   		break;
//			   }
//		   }
//		   if(true){
//		   	cout<<num<<" is Prime number";
//		   }
//		   else{
//		   	cout<<num<<" is not a prime number";
//		   } 
//	}
//		     
//};
//
//class DeterminerExtend : public Determiner{
//	    public :
//	    	
//	 	   DeterminerExtend(int k) : Determiner(num){
//	 	 
//		 }
//		
//		
//};
//
//int main(){
//	Determiner *ptr ;
//	 DeterminerExtend d(22);
//	 ptr=&d;
//	 ptr->prime();
//}
