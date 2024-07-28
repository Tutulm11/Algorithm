#include<bits/stdc++.h>
using namespace std;
int Partition(int *A,int start,int End)
{
    int pivot=A[End];
    int pIndex=start;

    for(int i=start;i<=End-1;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }

    }
    swap(A[pIndex],A[End]);
    return pIndex;

}

void quickSort(int *A,int start,int End)
{
    if(start<End)
    {
        int pIndex=Partition(A,start,End);
        quickSort(A,start,pIndex-1);
        quickSort(A,pIndex+1,End);
    }
}

void printMatrix(int *p,int n)
{
    //ofstream fout("quick100k.txt");

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
    quickSort(a,0,m-1);
    printMatrix(a,m);

   return 0;

}

