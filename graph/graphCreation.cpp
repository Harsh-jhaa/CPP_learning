#include<bits/stdc++.h>
using namespace std;

 class graph{

        public:

      map<int, vector<int>> adj;
        void addEdge(int u, int v, bool direction){
            adj[u].push_back(v);

            if(direction == 0){
                adj[v ].push_back(u);
            }

        }
        void printAdjList(){
            for(auto i: adj){
                cout<<i.first << " " ;
                for(auto j:i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }

    };

int main(){

    graph g;
    int n,m;
    cout<<"Enter number of nodes and edges: "<<endl;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter edges: "<<endl;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();
            
   
return 0;
}