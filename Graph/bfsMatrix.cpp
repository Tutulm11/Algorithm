#include<bits/stdc++.h>
using namespace std;



void printGraph(int **M,int V)
{
         for(int i=0;i<V;i++)
    {

        for(int j=0;j<V;j++)
        {
            cout<<M[i][j]<<" ";
        }
       cout<<endl;
    }


}

void BFS(int**Adj,int s,int v)
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
        for(int i=0;i<v;i++)
        {

           if (Adj[u][i]==1)
           {
              int neighbour=i;

              if(visited[neighbour]==0)
           {
               visited[neighbour]=1;
               Q.push(neighbour);
               dist[neighbour]=dist[u]+1;

           }
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

     int n,m;
     ifstream fin("ug1.txt");


    fin>>n>>m;
    //take dynamic  2d array

    int **M=new int*[n];

    for(int i=0;i<n;i++)
        {
            M[i]=new int[n];
        }

//zero
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            M[i][j]=0;
        }
    }

    int u,v;

    for(int i=0;i<m;i++)
    {
        fin>>u>>v;
        M[u][v]=M[v][u]=1;
    }
    printGraph(M,n);
    BFS(M,0,n);









    return 0;






}



