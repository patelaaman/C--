/*#include<iostream>
using namespace std;

int main(){
	 // Ascci Value A start at 65 and a start 97
	string str1 = "applf";
	string str2 = "apple"; 
	
	//Compare two String str1.compare(str2)
	//0 -->equal
	//comparision Lexicographical manner on the basic of ascci value
	//+ve -->str1 Larger
	// -ve -->str1 smmaller
	
	int result = str1.compare(str2);
	
	cout<<result;
}
*/
#include<iostream>
using namespace std;

int main(){
	string str1 = "we love our country";//19
	
	string rev_str;
	
	int size =str1.size();
	for(int i= size-1;i>=0;i--){
		rev_str.push_back(str1[i]);  // rev_str.push_back('y')

	}
	

	cout<<"Rerverse String = "<<rev_str;
}
