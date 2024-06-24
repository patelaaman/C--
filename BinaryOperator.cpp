#include<iostream>
using namespace std;
class gew{
	int x,y;
	public :
		gew(int x=0, int y=0){ //: x{x} ,y{y}{  (Initialiser List)
		  this->x = x;
		  this->y =y;
		}

gew operator +(gew &obj){
	gew g;
	g.x = x+obj.x;
	g.y = y + obj.y;
	
	return g;
}
	void show(){
		cout<<"X : "<<x<<" y: "<<y<<endl;
	}

};
int main(){
	gew g1(34,5);
	gew g2(34,53);
	gew g3;
	g3 = g1+g2;
	g3.show();
}
