
#include<bits/stdc++.h>
using namespace std;


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
    /*ifstream fin("100k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    */

    ifstream fin("sorted100k.txt");

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }

    //printList(a,n);

    int *s=insertionSort(a,n);
    cout<<".................................."<<endl;
     //printList(s,n);

     /*ofstream fout("insertion-sorted100k.txt");

     for(int i=0;i<n;i++)
     {
         fout<<s[i]<<endl;
     }
     */

     ofstream fout("insertion_sorted100k.txt");

     for(int i=0;i<n;i++)
     {
         fout<<s[i]<<endl;
     }











return 0;
}







