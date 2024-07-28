#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  bool flag=true;
  for(int i=2;i<n/2;i++)
  {
      if(n%i==0)
      {
          flag=false;
          break;
      }
  }
  return flag;
}

int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    if(isPrime(num))
    {
        cout<<num<<" is a prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number"<<endl;

    }



    return 0;
}
