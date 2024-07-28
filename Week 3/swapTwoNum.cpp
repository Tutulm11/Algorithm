#include<bits/stdc++.h>
using namespace std;


void Swap(int &a,int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    cout<<"Before swap "<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<"After swap "<<a<<" "<<b<<endl;


    return 0;
}
