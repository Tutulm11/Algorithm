#include<bits/stdc++.h>
using namespace std;





vector<int>*Transpose(vector<int>*Adj,int V)
{
    vector<int>*Adj1=new vector<int>[V];

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<Adj[i].size();j++)
        {
            Adj1[Adj[i][j]].push_back(i);
        }
    }
    return Adj1;
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
    vector<int>*Adj1=Transpose(Adj,V);
    printGraph(Adj1,V);









    return 0;






}


