/*#include<iostream>
using namespace std;
// In stack first in and last out
void f1(){
	int a,b,c;
	  a = 32;
	  cout<<" A is "<<a;
}

void f2(){
	int  d,e,f;
}
int main(){
	 int a ;
	 f1();
	 f2();
}
*/


//dangling pointer
/*
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int *p = new int;
//	*p = 90;
	cout<<*p;
	free(p);
	cout<<*p;
}
*/

// void pointer
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    void *p;
    int a = 90;
   p = &a;
   cout<<*((int*)p)<<endl;
   
   char ch= '+';
   p =&ch;
   cout<<*((char*)p);
}

// Invalid pointer
 An invalid  pointer  is a pointer the point which alo
 
// reference 
/*
#include<iostream>
using namespace std;

int main(){
   int a = 99;
   int &b = a;
    cout<<a; //99
    cout<<b; //99
    b = 80;
    cout<<a;  //80
    cout<<b;  //80 
	}
