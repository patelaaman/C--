#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;	
};
node * createhead(int d){
	
	node *n=new node;
	n->data=d;
	n->next=NULL;
	return n;	
}

  node *  insert(node *h,int d){
  	   node *temp=h;
  	   while(temp->next!=NULL)
  	          temp=temp->next;
  	   node * n=new node;
  	   n->data=d;
  	   n->next=NULL;
  	   temp->next=n;
  	   return h;
  	   	
  }
  
void * traverse(node *h){
	node *t = h;
	while(t->next != NULL){
		cout<<t->data<<" ";
		t = t->next;
	}
	cout<<t->data;
}

int main(){
	node *head=createhead(90);
    head=insert(head,89)	;
    head=insert(head,7)	;
     head=insert(head,70);
      head=insert(head,10);
    traverse(head);
		
}
