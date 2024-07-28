#include<iostream>
using namespace std;

void rightRotate(int *A,int n,int k)
{
    int temp[n];
    int j=0;

    for(int i=n-k;i<n;i++)
    {
        temp[j]=A[i];
        j++;
    }

    for(int i=0;i<n-k;i++)
    {
        temp[j]=A[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        A[i]=temp[i];
    }


}

void printList(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"=============="<<endl;
}



int main()
{
  int a[6]={10,20,30,40,50,60};

  printList(a,6);
  rightRotate(a,6,2);
  printList(a,6);
  return 0;
}
