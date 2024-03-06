#include <iostream>
using namespace std;
int main(){
 /*	int x = 5 ,y =5,z;
	x = ++x;      // 6
	y= --y;       //4
	++y;          //5
	z = x + ++x;  //  right to left (7 + 7)
	cout<<z;
*/
    int s =53,w =-3,z=22;
    cout<< s++ <<endl;  
    w=++s;
    cout<<w<<endl;
    z=s--;
    cout<<z<<endl;
    s=++s;
    cout<<s<<endl;
}
