
#include<bits/stdc++.h>
using namespace std;


int *bubbleSort(int *p,int n)
{
for(int k=0;k<n-1;k++)
{
    int temp;
     for(int i=0;i<n-k-1;i++)
    {
        if(p[i]>p[i+1])
        {
          temp=p[i];
          p[i]=p[i+1];
          p[i+1]=temp;
        }
    }
}
    return p;
}

void printList(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<"\n============="<<endl;
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
    //printList(a,n);

    int *s=bubbleSort(a,n);
    cout<<".................................."<<endl;
     //printList(s,n);

     ofstream fout("sorted100k.txt");

     for(int i=0;i<n;i++)
     {
         fout<<s[i]<<endl;
     }








return 0;
}






