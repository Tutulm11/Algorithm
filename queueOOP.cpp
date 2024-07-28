#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int n;
    int front;
    int rear;
    int *q;

public:
    Queue()
    {
        n=3;
        front=rear=-1;
        q=new int[n];
    }

    Queue(int n)
    {
        this->n=n;
        front=rear=-1;
        q=new int[n];
    }


    bool isEmpty()
{

    return front==-1 && rear==-1;
}


bool isFull()
{

    return rear==n-1;
}


void enqueue(int element)
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


void show()

{

if(isEmpty())
{
    cout << "Queue is underflow!" << endl;
}

cout<<"Queue elements: ";
for ( int i = front; i <=rear; i++)
{
    cout<<q[i]<<endl;
}
cout<<endl;

}








};

int main()
{
    Queue *Q=new Queue(10);
    Q->enqueue(10);
    Q->enqueue(20);
    Q->show();

    Q->dequeue();
    Q->show();
    Q->enqueue(30);
    Q->enqueue(40);
    Q->enqueue(50);
    Q->enqueue(60);
    Q->show();
    cout<<Q->Front()<<endl;
    Q->dequeue();
    Q->dequeue();

    Q->show();
    cout<<Q->Front()<<endl;


    return 0;


}

