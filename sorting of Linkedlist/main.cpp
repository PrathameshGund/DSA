#include <iostream>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

};

void Create (int A[],int n)
{
    Node *head;
    Node *last;
    Node *temp;

    head=new Node;
    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<n;i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;

    }
    Node *p=head;
    while(p)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
}


int main()
{
    int A[]={2,3,4};

    Create(A,3);
    return 0;
}
