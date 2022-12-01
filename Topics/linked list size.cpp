#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
struct node{
    int data;
    node *next;
};

node *root = NULL;

node *newNode(int val){
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;

    return temp;
}

void append(int val){
    if(root==NULL){
        root = newNode(val);
    }
    else{
        node *temp = root;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node *t = newNode(val);
        temp->next = t;
    }
}

void appendFirst(int val){

    node *temp = new node();
    temp->data = val;
    temp->next = root;
    root = temp;
	cnt++;
}

void display(){
    node *temp = root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void sz(){
	node *temp = root;
	while(temp != NULL){
		temp=temp->next;
		cnt++;
	}
	cout << cnt << endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int val;
        cin>>val;
        append(val);
//        cnt++;
    }

    display();
    cout << endl;
    appendFirst(40);
	display();
    cout << endl;
    cout << "Size = ";
    sz();
//    cout << "Size = " << cnt << endl;

}

