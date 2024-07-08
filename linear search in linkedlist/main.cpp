#include<iostream>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    int A[]={2,4,6,7,9,3,12,21};

    Node *head=new Node;
    Node *last;
    Node *temp;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<sizeof (A)/sizeof A[0];i++)
    {
            temp=new Node;
            temp->data=A[0];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
    }

    Node *p=head;
    Node *q;
    int key;
    cout<<"enter the key:";
    cin>>key;
    while(p)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
        }
        q=p;
        p=p->next;
    cout<<"key found";
    }


    cout<<key<<endl;
}
