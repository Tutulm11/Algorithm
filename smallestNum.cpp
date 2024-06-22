#include<bits/stdc++.h>
using namespace std;

int findSmallest(int *a,int n)
{
   int smallest=a[0];

   for(int i=0;i<n;i++)
   {
       if(a[i]<smallest)
       {
          smallest=a[i];
       }
   }
   return smallest;
}

int main()
{
    int n;
    cout << "Enter the size of the list: ";
    cin >> n;

    int *a=new int[n];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int smallest=findSmallest(a,n);
    cout << "The smallest number is: " << smallest << endl;


    return 0;
}

