#include <bits/stdc++.h>
using namespace std ;

int main(){
   int node , edge ;
   cout<<"Enter node and Edge number ";
   cin>>node;
   cin>>edge;
   int cost[node][node];
   for(int i=0; i < node ; i++){
      for(int j=0;j<node ; j++){
           if(i ==j)
               cost[i-1][j-1] = 0;
           else
               cost[i-1][j-1] = 1000;
      }
   }
   vector<int> graph[node];
   memset(graph , 0 , sizeof(graph));
   for(int i = 0 ; i<edge ; i++){

       int a , b , costx ;
       cout<< "Enter two end and cost: ";
       cin>>a>>b >>costx ;
       graph[a-1].push_back(b);
       cost[a-1][b-1] = costx;
   }


   queue<int>  ashik ;
   int distance[node] ;
    for(int i = 0 ; i<node ;i++){
         distance[i] = 1000;
      }
   int source = 1 ;
   ashik.push(source);
   distance[source-1] = 0;

   while(!ashik.empty()){
       int xyz = ashik.front();
       for(int i = 0 ; i< graph[xyz-1].size() ; i++){
           int abc = graph[xyz-1][i];
           ashik.push(abc);
           if(distance[abc-1] > distance[xyz-1]+cost[xyz-1][abc-1])

                 distance[abc-1] = distance[xyz-1]+cost[xyz-1][abc-1];


       }
            ashik.pop();


   }
   for(int i = 0 ; i< node ; i++){
      cout<<"Distance of "<<i+1 << " is "<<distance[i]<<endl;
   }


}
