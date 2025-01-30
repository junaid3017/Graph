#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//--------------------------------------------------------GRAPH TRAVERSALS---------------------------------------------
//---------------------TRAVERSAL-1:- BFS-------------------------
void bfs(int s, unordered_map<int,bool>&visited,unordered_map<int,list<int>>adjList){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int fNode = q.front();
        cout<<fNode<<" ";
        q.pop();

        for(auto it: adjList[fNode]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true;
            }
        }
    }

}

//---------------------------------DFS----------------------------
void dfs(int s,unordered_map<int,bool>&vis,unordered_map<int,list<int>>adjList){
    cout<<s<<" ";
    vis[s]=true;
    for(auto it: adjList[s]){
        if(!vis[it]){
            dfs(it,vis,adjList);
        }
    }
}
int main(){
//-------------BFS-----------------------
    // unordered_map<int,list<int>>adjList;
    // unordered_map<int,bool>visited(false);
    // int n = 4;
    // for(int i=0;i<=n;i++){
    //     if(!visited[i]){
    //         bfs(i,visited,adjList);
    //     }
    // }
//------------dfs-----------------------
    unordered_map<int,list<int>>adjList;
    unordered_map<int,bool>visited(false);
    int n = 4;
    for(int i=0;i<=n;i++){
        if(!visited[i]){
            dfs(i,visited,adjList);
        }
    }
     
return 0;
}