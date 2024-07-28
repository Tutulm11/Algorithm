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

    for(int j=0;j<n;j++)
        {
            cout<<p[j]<<" ";
        }

cout<<"\n................"<<endl;

}





int main()
{
    int m[20]={18,15,53,76,90,38,47,94,33,5,88,71,28,96,7,92,3,72,91,62};
    quickSort(m,0,19);
    printMatrix(m,20);

   return 0;

}
