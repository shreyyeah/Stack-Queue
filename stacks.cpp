//22070123114
//stacks-in-cpp
#define ERROR -9999
#define MAXSIZE 10
#include <iostream>
using namespace std;

class Stack
{
    int top;
    int array[MAXSIZE];
public:
    Stack();
    void Push(int);
    int Pop();
    int Peek();
};

 Stack:: Stack()
{
    top=-1;
}

 void Stack::Push(int item)
{
   if(top==MAXSIZE-1)
   {
      cout<<"Stack overflow";
      return;
   }
   else
   {
     top++;
     array[top]=item;
   }
}

int Stack::Pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
        return ERROR;
    }
    else
    {
        int ele=array[top];
        top--;
        return ele;
    }
}

int Stack::Peek()
{
    if (top!=-1)
      return array[top];
    else
    return ERROR;
}

int main()
{
    Stack s1;
    s1.Push(10);
    s1.Push(20);
    int v=s1.Pop();
    if(v!=ERROR)
    cout<<v;
    int x=s1.Peek();
    cout<<x;
}
