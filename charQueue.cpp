#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int n;
    int front;
    int rear;
    char *q;

public:
    Queue()
    {
        n=3;
        front=rear=-1;
        q=new char[n];
    }

    Queue(int n)
    {
        this->n=n;
        front=rear=-1;
        q=new char[n];
    }


    bool isEmpty()
{

    return front==-1 && rear==-1;
}


bool isFull()
{

    return rear==n-1;
}


void enqueue(char element)
{

if(isFull())
{

cout<<"Queue is overflow!"<<endl;

}

else if(isEmpty())
{

front=rear=0;
q[rear]=element;
}

else{

    rear++;
    q[rear]=element;
}



}

void dequeue()
{

if(isEmpty())
{

cout<<"Queue is underflow!"<<endl;

}
else if(front==rear)
{
front=rear=-1;

}
else
{
    front++;
}

}
int Front()
{
    if(isEmpty())
    {
        cout<<"Queue is underflow!"<<endl;
        return -1;
    }
    return  q[front];
}


void printQueue()

{

if(isEmpty())
{
    cout << "Queue is underflow!" << endl;
}

cout<<"Queue elements:\n";
for ( int i = front; i <=rear; i++)
{
    cout<<q[i]<<endl;
}
cout<<"============================"<<endl;

}








};

int main()
{
    Queue *Q=new Queue(6);
    Q->enqueue('a');
    Q->enqueue('b');
    Q->enqueue('c');
    Q->enqueue('d');
    Q->enqueue('e');
    Q->enqueue('f');
    Q->printQueue();


    return 0;


}


