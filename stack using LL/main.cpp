#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class stack
{
private:
    Node *top;

public:
    stack (){top==nullptr;}
    void push(int x);
    int pop();
    void Display();
};

void stack::push(int x)
{

   Node *t=new Node;
    if(t==nullptr)
    {

     cout<<"stack is Full"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int stack::pop()
{
    int x=-1;
    if(top==nullptr)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        x=top->data;
        Node *t=top;
        top=top->next;
        delete t;

    }
    return x;
}

void stack::Display()
{
    Node *p=top;
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop
    stk.Display();
    return 0;
}
