#include<bits/stdc++.h>
using namespace std;

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
    int a[5]={10,20,30,40,50};
    int item=60;
    int index = linearSearch(a, 5,item);

    if (index != -1) {
        cout << item << " found at index " << index << endl;
    } else {
        cout << item << " not found in the array" << endl;
    }


    return 0;
}
