//22070123114
//Queue-in-cpp
#define ERROR -9999
#define MAXSIZE 10
#include <iostream>
using namespace std;
 
class Queue
{
    int front,rear;
    int array[MAXSIZE];
    int size;
    public:
       Queue()
       {
          front=rear=-1;
       }
       void EnQueue(int item);
       int DeQueue();
       void Display();
};

void Queue::EnQueue(int element)
{
    if (rear==MAXSIZE-1)
    {
        cout<<"Queue overflow";
          return;
    }
    else
    {
        if(front==-1)
        front=0;

        rear++;
        array[rear]=element;
    }
}

int Queue::DeQueue()
{
    if(front==-1 || front==rear+1)
    {
        cout<<"Queue is empty";
        return ERROR;
    }
    int ele=array[front];
    front++;
    return ele;
}

void Queue::Display()
{
    int i=front;
    if(front== -1 || front==rear+1)
    {
         cout<<"Queue is empty";
    }
    while (i<=rear)
    {
        cout<<array[i]<<endl;
        i++;
    }
}

int main()
{
    Queue q1;
    q1.EnQueue(10);
    q1.EnQueue(20);
    int v=q1.DeQueue();
    q1.Display();
}
