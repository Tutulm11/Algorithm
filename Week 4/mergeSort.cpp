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
    while(j<=n1-1)
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

    for(int j=0;j<n;j++)
        {
            cout<<p[j]<<" ";
        }

cout<<"\n................"<<endl;

}


int main()

{
   int m=20;

    int a[m]={18,15,53,76,90,38,47,94,33,5,88,71,28,96,7,92,3,72,91,62};
    mergeSort(a,0,m-1);
    printArray(a,m);





    return 0;
}
