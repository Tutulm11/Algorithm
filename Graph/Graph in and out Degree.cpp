#include<bits/stdc++.h>
using namespace std;


int inDegree(int **M,int v,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if (M[i][v]==1)
        {
            c++;
        }
    }
    return c;
}

int outDegree(int **M,int v,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if (M[v][i]==1)
        {
            c++;
        }
    }
    return c;
}




int main()
{
    int n,m;

    cin>>n>>m;
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
        cin>>u>>v;
        M[u][v]=1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<< M[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<inDegree(M,7,n)<<endl;
    cout<<outDegree(M,7,n)<<endl;


    return 0;
}
