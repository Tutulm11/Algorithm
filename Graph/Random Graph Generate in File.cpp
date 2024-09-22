#include<bits/stdc++.h>
using namespace std;



int main()
{
    ofstream fout("rg.txt");
    int n=10;
    srand(time(0));
    fout<<n<<endl;
    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
               double p=(rand()%100+1)/100.0;
               if(p>=0.8)
               {
                   count++;
                   fout<<i<<" "<<j<<endl;
               }
            }
        }
    }

    fout<<count<<endl;


    return 0;
}

