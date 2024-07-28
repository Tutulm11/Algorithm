#include<bits/stdc++.h>
using namespace std;

/*1.linear search(100k data)
2.bubble,insertion and selection sort
3.binary search
4.merge sort
5.quick sort

*/
int linearSearch(int *a,int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==item)
        {
          return i;
        }
    }
    return -1;
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




    int index=linearSearch(a,n,100);
    cout<<index<<" "<<a[index]<<endl;




return 0;
}
