#include<iostream>
using namespace std;

struct  node{
	int data ;
	node *next;
	
};

node  *create_head(int d){
	//(Heap memorry) dynamic memory create karne ke liye new keyword ka use karte hai 
    node  *n = new node;
    n->data=d;
    n->next=NULL;
    return n;
}

node *insert(node *h,int d){
	node *n = new node;
	n->data=d;
	n->next=NULL;
	h->next=n;
	return h;
}

int main(){
	node *head;
	head = create_head(90);
	head=insert(head,39);
	cout<<head->data<<endl;
	cout<<head->next->data<<endl;
	
//	cout<<head->data;
//	cout<<endl;
//	cout<<head->next;
}
