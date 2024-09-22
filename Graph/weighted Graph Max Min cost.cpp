#include<bits/stdc++.h>
using namespace std;


void Maxcost(int **M,int n)
{
    int max_cost=M[0][0];
    int u,v;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(M[i][j]>max_cost)
            {
                max_cost=M[i][j];
                u=i;
                v=j;

            }
        }

    }
    cout<<u<<" "<<v<<" "<<max_cost<<endl;

}
void Mincost(int **M,int n)
{
    int min_cost=INT_MAX;
    int u,v;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(M[i][j]!=0 && M[i][j]<min_cost)
            {
                min_cost=M[i][j];
                u=i;
                v=j;

            }
        }

    }
    cout<<u<<" "<<v<<" "<<min_cost<<endl;

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
     ifstream fin("ug3.txt");
    fin>>V>>E;

    int **M=new int*[V];

    for(int i=0;i<V;i++)
        {
            M[i]=new int[V];
        }

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            M[i][j]=0;
        }
    }

    int u,v,w;

    for(int i=0;i<E;i++)
    {
        fin>>u>>v>>w;
        M[u][v]=M[v][u]=w;
    }
    printGraph(M,V);
   Maxcost(M,V);
   Mincost(M,V);

    return 0;
}




