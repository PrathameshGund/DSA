#include<iostream>
#include<stdlib.h>

using namespace std ;

class Node{


public :
        int data;
        Node *next;
    };

int main()
{
    int A[]={2,4,5,6,7,9};

    Node *head=new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
    Node *p=head;
    while(p!=nullptr)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
    return 0;
}
