#include<bits/stdc++.h>
#define dbug printf("I am here\n");
using namespace std;
#define white 1
#define gray 2
#define black 3

int adj[100][100];
int color[100];
int node;
int edge;

void dfsvisit(int n){

      color[n] = gray;
      for(int i=0;i<node;i++){
        if(adj[n][i] == 1){
        if(color[i]==white){
            dfsvisit(i);
                }
            }
      }
      color[n]=black;
     // cout<<n<<endl;
      return ;
}

void dfs(){

     for(int i=0;i<node;i++){
        color[i]=white;
     }
    for(int i=0;i<node;i++){
        if(color[i]==white){
            dfsvisit(i);
        }
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
dfs();
for(int i=0;i<10;i++)cout<<color[i]<<" ";

return 0;
}
