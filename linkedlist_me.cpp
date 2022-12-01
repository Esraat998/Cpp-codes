#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *root = NULL;

void append(int data){
	if(root == NULL){
		root = new node();
		root -> data = data;
		root -> next = NULL;
	}
	else{
		node *curnode = root;
		while(curnode -> next != NULL){
			curnode = curnode -> next;
		}
		node *temp = new node();
		temp -> data = data;
		temp -> next = NULL;
		curnode -> next = temp;
	}
}

void deletenode(int data){
	node *curnode = root;
	node *prevnode = NULL;
	while(curnode -> data != data){
		prevnode = curnode;
		curnode = curnode -> next;
	}
	if(curnode == root){
		node *temp = new node();
		temp = root;
		root = root -> next;
		delete (temp);
	}
	else{
		prevnode -> next = curnode -> next;
		delete(curnode);
	}
}

void print(){
	node *curnode = root;
	while(curnode != NULL){
		cout << curnode -> data << endl;
		curnode = curnode -> next;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		append(x);
	}
	deletenode(4);
	print();
	return 0;
}
