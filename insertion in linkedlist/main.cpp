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
    int A[]={2,4,5,7,8};

    Node *head=new Node;
    Node *last;
    Node *temp;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<sizeof (A)/sizeof A[0];i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
    int x;
    cout<<"enter the numbers";
    cin>>x;
    //insertion at the start
    Node *t=new Node;
    t->data=x;
    t->next=head;
    head=t;




    Node *p=head;

    while(p)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
    return 0;
}
