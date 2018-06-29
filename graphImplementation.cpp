#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
#include<typeinfo>
using namespace std;

void bfs(vector<int> adj[],const int S,int SN){
bool *visited = new bool[S];

for(int i=0; i<S; i++){
    visited[i]=false;
}
visited[SN]=true;
list<int> queue;
queue.push_back(SN);
//list<int>::iterator i;

while(!queue.empty()){
    SN = queue.front();
   // cout<<typeid(adj[SN]).name();
    cout<<SN<<" ";
    queue.pop_front();

    for(auto x : adj[SN]){

        if(!visited[x]){
            visited[x]=true;
            queue.push_back(x);
        }
    }
}
}

void printGraph(vector<int> adj[],const int S){
for(int v=0;v<S;++v){
cout<<"\nAdjacency list of vertext "<<v<<"\nhead ";
for(auto x : adj[v]){
cout<<x<<"->";
}
cout<<"\n";
}
}

void addEdge(vector<int> GraphNodes[],int u, int v){
GraphNodes[u].push_back(v);
GraphNodes[v].push_back(u);
}

int main(){
const int Size=5;
int StartingNode=2;
vector<int> GraphNodes[Size];
addEdge(GraphNodes,0,1);
addEdge(GraphNodes,0,4);
addEdge(GraphNodes,1,2);
addEdge(GraphNodes,1,3);
addEdge(GraphNodes,1,4);
addEdge(GraphNodes,2,3);
addEdge(GraphNodes,3,4);
//printGraph(GraphNodes,Size);
bfs(GraphNodes, Size, StartingNode);
return 0;
}
