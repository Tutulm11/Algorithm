#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}


int main()
{

int n=40;
int *a=new int[n];
ifstream fin("k.txt");

for(int i=0;i<n;i++)
{
    fin>>a[i];
}

printList(a,n);



    return 0;
}



