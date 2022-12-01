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

    for(int i = 0 ;i<node ; i++){
            cout<<i+1 <<" ---- > ";
            for(int j = 0 ; j < graph[i].size() ; j++){
                 cout<< graph[i][j] << " ";
            }
        cout<<endl;
    }


}
