#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Queue{
private:
    int n;
    int front;
    int rear;
    T *q;

public:
    Queue()
    {
        n=3;
        front=rear=-1;
        q=new T[n];
    }

    Queue(int n)
    {
        this->n=n;
        front=rear=-1;
        q=new T[n];
    }


    bool isEmpty()
{

    return front==-1 && rear==-1;
}


bool isFull()
{

    return rear==n-1;
}


void enqueue(T element)
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
    return  front;
}


void printQueue()

{

if(isEmpty())
{
    cout << "Queue is underflow!" << endl;
}
else
{
cout<<"Queue elements:\n";
for ( int i = front; i <=rear; i++)
{
    cout<<q[i]<<endl;
}
}

cout<<"==========================="<<endl;

}








};

int main()
{
    Queue<string> *Q=new Queue<string>(5);
    Q->enqueue("tutul");
    Q->enqueue("evernia");
    Q->enqueue("shylax");
    Q->enqueue("chinmu");
    Q->enqueue("50shade");
    Q->printQueue();
    Q->dequeue();
    Q->dequeue();
    Q->dequeue();
    Q->dequeue();
    Q->printQueue();


    return 0;


}


