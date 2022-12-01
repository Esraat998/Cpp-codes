#include <bits/stdc++.h>
using namespace std ;

int main(){
    int node , edge ;
    cout<<"Enter node and edge number"<<endl;
    cin>>node>>edge;
    int graph[node][node];
    memset(graph , 0 , sizeof(graph));

    while(edge--){
        int x , y ;
        cout<<"Enter two end : ";
        cin>>x>>y ;
        graph[x-1][y-1] = 1 ;
        graph[y-1][x-1] = 1;
    }

    for(int i = 0 ;i<node ; i++){
        for(int j=0; j<node ; j++){
            cout<<graph[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
