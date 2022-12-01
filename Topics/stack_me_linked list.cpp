#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *prev = NULL, *next = NULL;
};
node *root = NULL, *tail = NULL;

void stackpush(int data){
	node *temp = new node();
	temp -> data = data;

	if(root == NULL){
		root = temp;
		tail = temp;
	}
	else{
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;

	}
}

void stackpop(){
	if(tail == NULL) cout << "Stack is empty" << endl;
	else if(tail -> prev == NULL){
		tail = NULL;
		root = NULL;
	}
	else{
		tail = tail -> prev;
		delete(tail -> next);
		tail -> next = NULL;
	}
}

void print(){
	node *current = tail;
	while(current != NULL){
		cout << current -> data << endl;
		current = current -> prev;
	}
}

int main(){
	stackpush(1);
	stackpush(2);
	stackpush(3);
	stackpush(4);
	stackpush(5);
	print();
	cout << endl;
	stackpop();
	print();

	for(int i = 0; i < 4; i++) stackpop();
	stackpop();
	return 0;
}
