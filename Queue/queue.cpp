#include<bits/stdc++.h>
using namespace std;


int n=3;
int front=-1;
int rear=-1;


int* Queue=new int[n];

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
Queue[rear]=element;
}

else{

    rear++;
    Queue[rear]=element;
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
    return  Queue[front];
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
    cout<<Queue[i]<<" ";
}
cout<<endl;

}



int main()
{
    enqueue(10);
    enqueue(20);
    show();

    dequeue();
    show();
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    show();
    cout<<Front()<<endl;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    //show();
    //cout<<Front()<<endl;


}
