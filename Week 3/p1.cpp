#include<bits/stdc++.h>
using namespace std;

//Matrix function----summation---substruction--multiplication---transpose
//use random num in matrix--use dynamic matrix
int **createMatrix(int row,int col)
{
   int **m=new int*[row];

for(int i=0;i<row;i++)
{
    m[i]=new int[col];
}

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            m[i][j]=rand()%10;
        }
    }

return m;
}

int **sumMatrix(int **p,int **q,int row,int col)
{
int **c=new int*[row];

for(int i=0;i<row;i++)
{
    c[i]=new int[col];
}

for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=p[i][j]+q[i][j];
        }
    }

    return c;


}

int **trasposeM(int **p,int row,int col)
{
   int **k=new int*[col];

for(int i=0;i<col;i++)
{
    k[i]=new int[row];
}

for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            k[i][j]=p[j][i];
        }
    }
    return k;

}

int **MultiplicationM(int **p,int r1,int c1,int **q,int r2,int c2)
{
    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible with given dimensions." << endl;
        return nullptr;
    }
    int **c=new int*[r1];

for(int i=0;i<r1;i++)
{
    c[i]=new int[c2];
     for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
}

for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        for(int k=0;k<c1;k++)
        {
           c[i][j]+=p[i][k]*q[k][j];
        }
    }
}
return c;
}


void printMatrix(int **p,int row,int col)
{
    for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
        {
            cout<<p[i][j]<<" ";
        }
    cout<<endl;
}
cout<<"................"<<endl;

}
int main()
{
    srand(time(0));

   /* int **m1=createMatrix(4,5);
    printMatrix(m1,4,5);
    cout<<endl;


    int **m2=createMatrix(4,5);
    printMatrix(m2,4,5);
    cout<<endl;

    int **m3=sumMatrix(m1,m2,4,5);
    printMatrix(m3,4,5);
    cout<<endl;


    int **m4=trasposeM(m3,4,5);
    printMatrix(m4,5,4);
    cout<<endl;

    */
    int **m5=createMatrix(4,5);
    printMatrix(m5,4,5);
    cout<<endl;


    int **m6=createMatrix(5,4);
    printMatrix(m6,5,4);
    cout<<endl;

    int **m7=MultiplicationM(m5,4,5,m6,5,4);
    if (m7 != nullptr){
    printMatrix(m7,4,4);
    cout<<endl;


    }



    return 0;
}
