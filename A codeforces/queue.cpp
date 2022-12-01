#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *root = NULL;

node *newNode(int data){
    node *temp = new node();
    temp->data =data;
    temp->next = NULL;

    return temp;
}

void qpush(int data){
	 if(root==NULL){
        root = newNode(data);
    }
    else{
        node *curNode = root;
        while(curNode->next!=NULL){
            curNode = curNode->next;
        }
        node *temp = new node();
        temp->data = data;
        temp->next = NULL;
        curNode->next = temp;
    }
}

void qfront(){
	if(root != NULL){
		cout << root -> data << endl;
	}
}

void qpop(){
	if(root == NULL) cout << "stack is empty" << endl;
	node *temp = root;
	root = root -> next;
	free(temp);

}

int qback(){
	node *curNode = root;
	while(curNode -> next != NULL){
		curNode = curNode -> next;
	}
	return curNode -> data;
}

bool qempty(){
	if(root == NULL) return true;
	else return false;
}
///5 7 9 15 20

void print(){
    node *curNode = root;
    while(curNode!=NULL){
        cout<<curNode->data<<" ";
        curNode = curNode->next;
    }
    cout << endl;
}

int main(){
	int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        qpush(x);
    }
    print();
    qpop();
    qfront();
    print();
    cout << pushfront() << endl;
    cout << qback() << endl;
    cout << qempty() << endl;
    return 0;
}
