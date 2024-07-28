#include<bits/stdc++.h>
using namespace std;

int *MERGE(int *A,int *B,int n,int m)
{
    int i=0,j=0,k=0;
    int *C=new int[m+n];

    while(i<=n-1 && j<=m-1)
    {
        if(A[i]>B[j])
        {
            C[k++]=B[j++];
        }
        else
        {
            C[k++]=A[i++];
        }
    }

    while(i<=n-1)
    {
       C[k++]=A[i++];
    }

    while(j<=m-1)
    {
       C[k++]=B[j++];
    }
    return C;
}

void printMatrix(int *p,int n)
{

    for(int j=0;j<n;j++)
        {
            cout<<p[j]<<" ";
        }

cout<<"\n................"<<endl;

}



int main()
{
   int m=10;
   int *a=new int[m];
   cout<<"Enter first array: "<<endl;
   for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    printMatrix(a,m);

   int n=10;
   int *b=new int[n];
   cout<<"Enter first array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    printMatrix(b,n);

    int *q=MERGE(a,b,m,n);
    printMatrix(q,20);



return 0;

}
