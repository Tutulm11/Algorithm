#include<bits/stdc++.h>
using namespace std;


void DFS(int **M,int V,int n)
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

        for(int i=0;i<n;i++)
        {
            if (M[u][i]==1)
            {
            int neighbour=i;

            if(visited[neighbour]==0)
            {
                visited[neighbour]=1;
                S.push(neighbour);

            }
            }

        }
    }

}



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



int main()

{

     int V,E;
     ifstream fin("ug1.txt");


    fin>>V>>E;
    //take dynamic  2d array

    int **M=new int*[V];

    for(int i=0;i<V;i++)
        {
            M[i]=new int[V];
        }

//zero
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            M[i][j]=0;
        }
    }

    int u,v;

    for(int i=0;i<E;i++)
    {
        fin>>u>>v;
        M[u][v]=M[v][u]=1;
    }
    printGraph(M,V);
    cout << "DFS Traversal starting from vertex 0:\n";
    DFS(M,0,V);









    return 0;






}


