#include <bits/stdc++.h>
using namespace std ;

int main(){
    int node , edge ;
    cout<<"Enter node and edge number"<<endl;
    cin>>node>>edge;
    vector<int> graph[node];


    while(edge--){
        int x , y ;
        cout<<"Enter two end : ";
        cin>>x>>y ;
        graph[x-1].push_back(y);
        graph[y-1].push_back(x);
    }

    queue<int> q ;
    int level[node];
    int visited[node];
    memset(visited , 0 , sizeof(visited));

    int source = 1 ;

    visited[source-1] = 1 ;
    level[source-1] = 0;
    q.push(source);
    while(!q.empty()){
        int top = q.front();
        for(int i = 0 ;i<graph[top-1].size() ; i++){
                int current = graph[top-1][i];
                if(visited[current-1] == 0 ){
                   q.push(current);
                   visited[current-1] = 1;
                   level[current-1] = level[top-1] + 1 ;
               }
        }
        q.pop();

    }

    for(int i = 0 ; i<node ; i++){
        cout<<i+1 <<" node level is " <<level[i]<<endl;
    }

}

