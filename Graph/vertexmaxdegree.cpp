
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

int vertexMaxDegree(vector<int>*Adj,int V)
{
    int m=INT_MIN,v;
    for(int i=0;i<V;i++)
    {
        int s=Adj[i].size();
        {
            if(m<s)
            {
                m=s;
                v=i;
            }
        }
    }



    return v;
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

    int m=vertexMaxDegree(Adj,V);
    cout<<m<<endl;








    return 0;






}


