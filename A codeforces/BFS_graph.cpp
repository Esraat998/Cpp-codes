#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3

int node,edge;

int adj[100][100];
int color[100];
int parent[100];
int dis[100];

void bfs(int startnode){

      for(int i=0;i<node;i++){
        color[i] = white;
        dis[i] = INT_MIN;
        parent[i] = -1;
      }
      dis[startnode] = 0;
      parent[startnode] = -1;

      queue<int >q;
      q.push(startnode);

      while( ! q.empty()){

        int x;
        x = q.front();
        q.pop();
        color[x] = gray;
//cout<<x<<endl;
        for(int i=0; i<node; i++){
            if(adj[x][i]== 1) {
                if(color[i] == white){
                    q.push(i);
                    parent[i] = x;
                    dis[i] = dis[x] + 1;
                }
            }
        }
        color[x] = black;
      }

}

int main(){
    int x,y;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    bfs(0);
    for(int i=0;i<node;i++)cout<<color[i]<<" "<<parent[i]<<" "<<dis[i]<<endl;

    return 0;
}
