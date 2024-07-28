#include<bits/stdc++.h>
using namespace std;

void Merge(int *A,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1];
    int R[n2];

    for(int i=0;i<=n1-1;i++)
    {
        L[i]=A[left+i];
    }

    for(int j=0;j<=n2-1;j++)
    {
        R[j]=A[mid+1+j];
    }

    int i=0,j=0,k=left;

    while(i<=n1-1&&j<=n2-1)
    {
        if(L[i]<=R[j])
        {
            A[k++]=L[i++];
        }
        else
        {
            A[k++]=R[j++];
        }
    }

    while(i<=n1-1)
    {
        A[k++]=L[i++];
    }
    while(j<=n2-1)
    {
        A[k++]=R[j++];
    }

}
void mergeSort(int *a,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);
        Merge(a,left,mid,right);

    }

}



void printArray(int *p,int n)
{
    //ofstream fout("mergeSorted.txt");

    for(int j=0;j<n;j++)
        {
            cout<<p[j]<<" "<<endl;
        }

cout<<"\n................"<<endl;

}


int main()

{
   int m=100000;
   int *a=new int[m];
   ifstream fin("100k.txt");
   for(int i=0;i<m;i++)
   {
       fin>>a[i];
   }

    //int a[m]={20,10,5,2,21,1};
    mergeSort(a,0,m-1);
    printArray(a,m);





    return 0;
}

