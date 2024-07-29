
#include<bits/stdc++.h>
#include<chrono>
using namespace std;

using namespace std::chrono;

int *insertionSort(int *p,int n)
{
for(int j=1;j<n;j++)
{
    int value=p[j];
    int i=j-1;

    while(i>=0&&p[i]>value)
    {
        swap(p[i],p[i+1]);
        i=i-1;
    }
    p[i+1]=value;

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

    int *b=new int[n];
   /* ifstream fin("100k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    auto start=high_resolution_clock::now();
    int *s=insertionSort(a,n);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<seconds>(stop-start);
    cout<<"Time duration Unsorted Data: "<<duration.count()<<" seconds "<<endl;
*/
    ifstream fin("sorted100k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>b[i];
    }

    cout<<".................................."<<endl;
    auto start=high_resolution_clock::now();
    int *s=insertionSort(b,n);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<seconds>(stop-start);
    cout<<"Time duration sorted Data: "<<duration.count()<<" seconds "<<endl;




return 0;
}








