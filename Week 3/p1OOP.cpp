#include<bits/stdc++.h>
using namespace std;

class Matrix
{
private:
    int row;
    int col;
    int **m;

public:
Matrix()
{
    row=4;
    col=5;
    m=new int*[row];

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
}

Matrix(int row,int col)
     {
         this->row=row;
         this->col=col;
         m=new int*[row];
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

void printMatrix()
{
    for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
        {
            cout<<m[i][j]<<" ";
        }
    cout<<endl;
}
cout<<"................"<<endl;

}

};



int main()
{
    srand(time(0));

    Matrix *m1=new Matrix(4,5);
    m1->printMatrix();
    cout<<endl;


    Matrix *m2=new Matrix(4,5);
    m2->printMatrix();
    cout<<endl;


    Matrix *m3=new Matrix(4,5);
    m3->sumMatrix(m1,m2,4,5);
    m3->printMatrix();
    cout<<endl;

    /*Matrix *m4=new Matrix(4,5);
    m4->trasposeM(m2,4,5);
    m4->printMatrix(5,4);
    */



    return 0;
}

