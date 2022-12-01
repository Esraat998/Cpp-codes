#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<ll,ll>

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


void push(int data){
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

void pushfront(int data){
	if(root == NULL) root = newNode(data);
	else {
        node *temp = new node();
        temp -> data = data;
        temp -> next = root;
        root = temp;
	}
}

void midpop(int data){
    if(root -> data == data){
        root = root -> next;
    }
    else{
        node *temp = root;
        while(temp -> next -> next != data){
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
    }
}

void print(){
    node *curNode = root;
    while(curNode!=NULL){
        cout<<curNode->data<<" ";
        curNode = curNode->next;
    }
}

int main(){

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        push(x);
    }
    print();
    midpop(4);
//    pushfront(5);
}
//node *root = NULL;
//
//void newNode(int data){
//    int *temp = new node();
//}
//
//void create(int data){
//    if(root==NULL){
//
//    }
//}

