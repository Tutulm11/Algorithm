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

int findIndegree(vector<int>*Adj,int V,int index)
{


    int indegree=0;

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<Adj[i].size();j++)
        {
            if(Adj[i][j]==index)
            {
                indegree++;
            }
        }
    }
    return indegree;
}


int findOutdegree(vector<int>*Adj,int V)
{ int outdegree;
    outdegree=Adj[V].size();



    return outdegree;

}

int main()

{
    int V,E;


    ifstream fin("dg.txt");
    fin>>V>>E;

    vector<int> *Adj=new vector<int> [V];



    int u,v;

    for(int i=0;i<E;i++)
    {
        fin>>u>>v;
        Adj[u].push_back(v);
        //Adj[v].push_back(u);
    }

    printGraph(Adj,V);
    cout<<"In Degree:  "<<findIndegree(Adj,V,2)<<endl;
    cout<<"Out Degree:  "<<findOutdegree(Adj,2);








    return 0;






}


