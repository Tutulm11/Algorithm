
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

int vertexDegree(vector<int>*Adj,int V)
{
    int degree;
    degree=Adj[V].size();



    return degree;
}

int main()

{
    int V,E;


    ifstream fin("ug.txt");
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

    cout<<"Degree of vertex: "<<vertexDegree(Adj,2);








    return 0;






}



