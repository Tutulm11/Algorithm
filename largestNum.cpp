#include<bits/stdc++.h>
using namespace std;

int findLargest(int *a,int n)
{
   int largest=a[0];

   for(int i=0;i<n;i++)
   {
       if(a[i]>largest)
       {
          largest=a[i];
       }
   }
   return largest;
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

    int largest=findLargest(a,n);
    cout << "The largest number is: " << largest << endl;


    return 0;
}
