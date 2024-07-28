#include<bits/stdc++.h>
using namespace std;

queue<int> linearSearch(int *a,int n,int item)
{
    queue<int>q;

     for(int i=0;i<n;i++)
    {
        if(a[i]==item)
        {
          q.push(i);

        }
    }
    return q;
}
int main()
{
    int n=100000;

    int *a=new int[n];
    ifstream fin("100k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }

    queue<int> indexes=linearSearch(a,n,100);

    while(!indexes.empty())
    {
        cout<<indexes.front()<<" "<<a[indexes.front()]<<endl;
        indexes.pop();
    }

    return 0;
}
