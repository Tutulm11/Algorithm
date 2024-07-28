#include<iostream>
using namespace std;
template<typename T>

class Matrix{
private:
 int row;
 int col;
 T **m;

public:

    Matrix()
    {
        row=5;
        col=5;
        m=new T*[row];
        for(int i=0;i<row;i++)
            {
                m[i]=new T[col];
            }

    }

     Matrix(int row,int col)
     {
         this->row=row;
         this->col=col;
         m=new T*[row];
          for(int i=0;i<row;i++)
            {
                m[i]=new T[col];
            }

     }
     void inputMatrix()
{
    cout<<"input!"<<endl;
    for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
        {
            cin>>m[i][j];
        }
    cout<<endl;
}
cout<<"................"<<endl;

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

    Matrix<string>*m1=new Matrix<string>(3,3);
    m1->inputMatrix();
    m1->printMatrix();




    return 0;
}

