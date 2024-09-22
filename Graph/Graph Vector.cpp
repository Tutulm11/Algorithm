#include<bits/stdc++.h>
using namespace std;

int main()

{
    int V;
    int E;
    cin>>V>>E;

    vector<int> *adj=new vector<int>[V];


    int u,v;

    for(int i=0;i<E;i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    for(int i=0;i<V;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
       cout<<endl;
    }

    int index;
    cin>>index;
    int out_degree=adj[index].size();
    cout<<out_degree<<endl;


    int indegree=0;

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            if(adj[i][j]==index)
            {
                indegree++;
            }
        }
    }
    cout<<indegree;








   return 0;



}

