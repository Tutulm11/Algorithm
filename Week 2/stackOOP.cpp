#include<iostream>
using namespace std;

class Stack{
private:
int n;
int top;
int *S;


public:

    Stack()
    {
        n=3;
        top=-1;
        S=new int[n];
    }

    Stack(int n)
    {
        this->n=n;
        top=-1;
        S=new int[n];
    }
    bool isFull()
{
    return top==n-1?true:false;
}

bool isEmpty()
{
    return top==-1?true:false;
}


void push(int x)
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

Stack *a=new Stack();

    a->push(10);
    a->push(20);
    a->push(30);
    a->push(40);
    a->push(50);
    a->push(60);
    a->printStack();
    a->pop();
    a->pop();
    a->pop();
    a->pop();
    a->printStack();
    cout<<a->findTop()<<endl;


    return 0;
}
