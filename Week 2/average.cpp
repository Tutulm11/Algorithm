#include<bits/stdc++.h>
using namespace std;

void average(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
   sum=sum+p[i];
    }
    int avg=sum/n;
    cout<<avg<<endl;
}

int bonus(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        p[i]=p[i]+5;

    }

}

void printList(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}


int main()
{

srand(time(0));
ofstream fout("marks.txt");
for(int i=0;i<40;i++)
{

    fout<<rand()%100+1<<endl;
}


int n=40;
int *a=new int[n];

ifstream fin("marks.txt");

for(int i=0;i<n;i++)
{
    fin>>a[i];
}

average(a,n);
bonus(a,n);


//need to dynamically
    return 0;
}




