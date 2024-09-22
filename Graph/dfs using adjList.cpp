#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>*adj,int V,int n)
{
    stack<int> S;
    int *visited=new int[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }

    S.push(V);
    visited[V]=1;


    while(!S.empty())
    {
        int u=S.top();
        S.pop();
        cout<<u<<" ";

        for(int i=0;i<adj[u].size();i++)
        {
            int neighbour=adj[u][i];

            if(visited[neighbour]==0)
            {
                S.push(neighbour);
                visited[neighbour]=1;
            }
        }
    }

}


void printGraph(vector<int>*Adj,int V)
{
         for(int i=0;i<V;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<Adj[i].size();j++)
        {
            cout<<Adj[i][j]<<" ";
        }
       cout<<endl;
    }


}



int main()

{
    int V,E;


    ifstream fin("ug1.txt");
    fin>>V>>E;

    vector<int> *Adj=new vector<int> [V];



    int u,v;

    for(int i=0;i<E;i++)
    {
        fin>>u>>v;
        Adj[u].push_back(v);
        Adj[v].push_back(u);
    }

    printGraph(Adj,V);
    cout << "DFS Traversal starting from vertex 0:\n";
    DFS(Adj,0,V);










    return 0;






}

