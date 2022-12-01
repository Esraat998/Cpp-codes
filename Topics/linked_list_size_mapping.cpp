#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<ll,ll>

map <int, int> mp;
int cnt = 0;
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

void print(){
    node *curNode = root;
    while(curNode!=NULL){
        cout<<curNode->data<<" ";
        mp[curNode->data]++;
        cnt++;
        if(mp[curNode->data] > 1) cout << " number of same are -> " << mp[curNode->data];
        cout << endl;

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
    cout << endl;
    cout << "Number of values --> " << cnt << endl;

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




