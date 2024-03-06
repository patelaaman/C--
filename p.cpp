#include<iostream>
#include<cmath>
#include <vector>
using namespace std;

class Shape{
	public :
		virtual double calculateArea(){
			return 0;
		}
};
class Circle : public Shape{
	private :
		double radius;
	public :
		Circle(double r) : radius(r){}
		double calculateArea(){
			return 3.14*radius*radius;
		}
};
class Square : public Shape{
	private :
		double side;
	public :
		Square(double s) : side(s){}
		double calculateArea(){
			return side*side;
		}
};
class Triangle : public Shape{
	private :
		double base ,height;
	public :
		Triangle(double b ,double h) : base(b), height(h){}
		double calculateArea(){
			return 0.5*base*height;
		}
};

int main(){
	 vector<Shape*> S;
	 Circle c(3);
	 Square s(5);
	 Triangle t(3,5);
	 
  S.push_back(&c);
  S.push_back(&s);
  S.push_back(&t);
  for(Shape* sh : S){
  	cout<<" Area :" <<sh->calculateArea();
  }
 	
}
