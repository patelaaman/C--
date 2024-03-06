#include<iostream>
using namespace std;
class Shape{
	public :
		virtual void calculateA() = 0;
		virtual void calculateP()= 0;
};
class Ractangle {
	public : 
	int length ,breath;
	
	Ractangle(int len, int bre){
		length = len;
		breath = bre;
	}
};
class  Cuboid : public Ractangle ,public Shape{
	public :
		int height;
		
		Cuboid(int n1,int n2,int n3):Ractangle(n1,n2){
			height = n3;
		}
		void calculateA(){
			cout<<"Area of cuboid will be :"<<(2*((length*breath)+ (breath*height) + (height*length)));
			cout<<endl;
		}
		void calculateP(){
			cout<<"the parameter of cuboid will be "<<(4*(length + breath + height));
		}
};


int main(){
	Shape *base ;
	Cuboid R(34,2,4);
	base = &R;
	base ->calculateA();
	base ->calculateP();
}
