#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<int> aman = {2,3,5,4};
	for(const int&i:aman){
			cout<<i<<" ";
	}

}
