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
    int A[]={5,4,8,9,7,6,1,2};
    Node *head=new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<sizeof (A)/sizeof A[1];i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
//code for addition
Node *p=head;
int m=-32678;
while(p)
{
    if(p->data>m)
        m=p->data;
    p=p->next;
}
cout<<m;
}
