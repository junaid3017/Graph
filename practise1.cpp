#include <bits/stdc++.h>
using namespace std;
    void addEdge(int u, int v, int w, bool d,map<int,list<pair<int,int>>>&adjList){
        adjList[u].push_back({v,w});
        if(d==0){
            adjList[v].push_back({u,w});
        }
        //Printing the adjList
     
    }

int main() {
	//----------------------------------------------------GRAPH IMPLEMENTATION-------------------------------------------------------------
    //---------------------METHOD-1:-  ADJACENCY MATRIX--------------------------
	// cout<<"Enter number of nodes"<<endl;
	// int n ;
	// cin>>n;
	// vector<vector<int>>adjMatrix(n+1,vector<int>(n+1,0));
	// cout<<"Enter number of edges"<<endl;
	// int e;
	// cin>>e;
	// for(int i=1;i<=e;i++){
	//     int v;
	//     int u;
	//     cout<<"Enter node1"<<endl;
	//     cin>>u;
	//     cout<<"Enter node2"<<endl;
	//     cin>>v;
	//     adjMatrix[u][v]=1;
	//     adjMatrix[v][u]=1;
	// }
	
	// //Printing the matrix;
	// for(int i=0;i<=n;i++){
	//     for(int j=0;j<=n;j++){
	//         cout<<" "<<adjMatrix[i][j];
	//     }
	//     cout<<endl;
	// }


    //---------------------------------------METHOD-2:- ADJACENCY LIST-----------------------------------------------------
    map<int,list<pair<int,int>>>adjList;
    addEdge(0,1,11,1,adjList);
    addEdge(0,3,9,1,adjList);
    addEdge(1,2,4,1,adjList);
    addEdge(1,3,6,1,adjList);
    addEdge(2,3,12,1,adjList);

     
       for(auto it:adjList){
            int u = it.first;
            // auto v = it.second;
            cout<<u<<"->";
            for(auto i:it.second){
                cout<<"("<<i.first<<","<<i.second<<"),";
            }
            cout<<endl;

        }
	return 0;
	
	

}
