#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printList(int *a,int n)
{
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

}

int *addBegining(int *a,int n,int num)
{
    int *b=new int[n+1];
    b[0]=num;
    for(int i=0;i<n;i++)
    {
        b[i+1]=a[i];
    }
    return b;
}

int Search(int *a,int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            return i;

        }
    }
    return -1;
}

int *mergeSize(int *a,int m,int *b,int n)
{
    int *d=new int[m+n];
    for(int i=0;i<m;i++)
    {
        d[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        d[m+i]=b[i];
    }
    return d;
}

int *deleteItem(int *a,int n,int index)
{
    int *b=new int[n-1];

     for(int i=0;i<index;i++)
     {
        b[i]=a[i];
     }
     for(int i=index;i<n-1;i++)
     {
        b[i]=a[i+1];
     }
     return b;

}


int *makeDouble(int *m,int n )
{
    int *b=new int[n];

    for(int i=0;i<n;i++) b[i]=m[i]*2;

    return b;
}

int main()
{
    int a[5]={10,20,30,40,50};
    printList(a,5);
    //int *p = makeDouble(a,5);
    //printList(p,5);
    int *p=addBegining(a,5,100);
    printList(p,6);

    int Index=Search(p,6,30);
    //cout<<Index<<endl;
    int *l=deleteItem(p,6,Index);
    printList(l,5);

    int *m=mergeSize(p,6,l,5);
    printList(m,11);





    return 0;
}
