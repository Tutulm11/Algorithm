#include<bits/stdc++.h>
using namespace std;



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

void BFS(vector<int>*Adj,int s,int v)
{
    queue<int> Q;
    int *dist=new int[v];
    int *visited=new int[v];
    for(int i=0;i<v;i++)
    {
        dist[i]=0;
        visited[i]=0;
    }

    Q.push(s);
    visited[s]=1;


    while(!Q.empty())
    {
        int u=Q.front();

        Q.pop();
        cout<<u<<" ";
        for(int i=0;i<Adj[u].size();i++)
        {
           int neighbour=Adj[u][i];
           if(visited[neighbour]==0)
           {
               visited[neighbour]=1;
               Q.push(neighbour);
               dist[neighbour]=dist[u]+1;

           }
        }
    }
    cout<<"\nDistance from "<<s<<" to\n";
    for(int i=0;i<v;i++)
    {
        cout<<i<<" : ";
        cout<<dist[i]<<endl;
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
    BFS(Adj,0,V);









    return 0;






}


