#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next = NULL;
	node* prev = NULL;
};

node *root = NULL, *tail = NULL;

void infirst(int data){
	if(root == NULL){
		root = new node();
		root -> data = data;
		tail = root;
		return;
	}
	node *temp = new node();
	temp -> data = data;
	temp -> next = root;
	root -> prev = temp;
	root = temp;
}

void inmiddle(int position, int data){
	node *current = root, *extra = NULL;

	while(current != NULL){
		if(current -> data == position){
			node *temp = new node();
			temp -> data = data;
			extra = current -> next;

			temp -> next = extra;
			temp -> prev = current;

			current -> next = temp;
			extra -> prev = temp;
		}

		current = current -> next;
	}
}

void inlast(int data){
	if(root == NULL){
		root = new node();
		root -> data = data;
		root = tail;
	}
	else{
		node *temp = new node();
		temp -> data = data;
		temp -> prev = tail;
		tail -> next = temp;
		tail = temp;
	}
}

void delnode(int data){
	node *current = root;
	if(root -> data == data){
		root = root -> next;
		delete(root -> prev);
		root -> prev = NULL;
		return;
	}
	else if(tail -> data == data){
		tail = tail -> prev;
		delete(tail -> next);
		tail -> next = NULL;
		return;
	}
	else{
		node *left = NULL, *right = NULL;

		while(current -> data != data){
			current = current -> next;
		}
		left = current -> prev;
		right = current -> next;
		delete(current);

		left -> next = right;
		right -> prev = left;
		return;
	}
}

void print(){
	node *current = root;
	while(current != NULL){
		cout << current -> data << endl;
		current = current -> next;
	}
}

int main(){
	infirst(3);
	infirst(4);
	inlast(5);
	inlast(7);
	inlast(8);
	inlast(9);
	inmiddle(7, 100);
	print();
	cout << endl;

	delnode(8);
	print();
	return 0;
}
