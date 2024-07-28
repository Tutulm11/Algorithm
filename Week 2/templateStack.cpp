#include<iostream>
using namespace std;

template<typename T>

class Stack{
private:
int n;
int top;
T *S;


public:

    Stack()
    {
        n=3;
        top=-1;
        S=new T[n];
    }

    Stack(int n)
    {
        this->n=n;
        top=-1;
        S=new T[n];
    }
    bool isFull()
{
    return top==n-1?true:false;
}

bool isEmpty()
{
    return top==-1?true:false;
}


void push(T x)
{
    if(isFull())
    {
      cout<<"Full"<<endl;
    }
    else{
   top++;
   S[top]=x;
    }
}

void pop()
{
    if(isEmpty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        top--;
    }

}

int findTop()
{
    return top;
}

void printStack()
{
    for(int i=top;i>=0;i--)
    {
        cout<<S[i]<<endl;
    }
    cout<<"=========="<<endl;
}

};


int main()
{

    /*Stack a(2);

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    a.printStack();
    */

/*Stack<int> *a=new Stack<int>(5);

    a->push(10);
    a->push(20);
    a->push(30);
    a->push(40);
    a->push(50);
    a->printStack();*/

    Stack<string> *a=new Stack<string>(5);

    a->push("tutul1");
    a->push("tutul2");
    a->push("tutul3");
    a->push("tutul4");
    a->push("tutul5");
    a->printStack();


    return 0;
}

