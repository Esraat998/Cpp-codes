#include <bits/stdc++.h>
using namespace std ;

int main(){
    int node , edge ;
    cout<<"Enter node and edge number"<<endl;
    cin>>node>>edge;
    int graph[node][node];

    for(int i = 0 ; i<node ; i++){
        for(int j=0 ; j<node ; j++){
            if(i==j)
                graph[i][j] = 0;
            else
                graph[i][j] = 10000;
        }
    }

    while(edge--){
        int x , y , cost ;
        cout<<"Enter two end and csot: ";
        cin>>x>>y>>cost ;
        graph[x-1][y-1] = cost ;
    }

    for(int i = 0 ;i<node ; i++){
        for(int j=0; j<node ; j++){
                if(graph[i][j] == 10000)
                  cout<<"x ";
                else
                  cout<<graph[i][j]<< " ";
        }
        cout<<endl;
    }

    for(int k = 0 ; k<node ; k++){
        for(int i = 0 ;i<node ; i++){
            for(int j=0;j<node ; j++){
                if(graph[i][j] > graph[i][k]+graph[k][j])
                    graph[i][j] =  graph[i][k]+graph[k][j];
            }
        }
    }

    cout<<"All pair shortest path"<<endl;
    for(int i = 0 ;i<node ; i++){
        for(int j=0; j<node ; j++){
                if(graph[i][j] == 10000)
                  cout<<"x ";
                else
                  cout<<graph[i][j]<< " ";
        }
        cout<<endl;
    }




}
